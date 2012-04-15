#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

bool CheckPalindrome(const string &toCheck);

const unsigned int lowerBound=100;
const unsigned int upperBound=lowerBound*10-1;
int main (){
	//finds larges palindromic number based on limits specified in
	//the constants above
#ifdef DEBUG
	if(CheckPalindrome("RACECAR")){
		cout <<"passed on RACECAR" <<endl;
	}
	if(!CheckPalindrome("dog")){
		cout <<"passed on dog"<<endl;
	}
	if(CheckPalindrome("9009")){
		cout <<"passed on 9009"<< endl;
	}
#endif
	long unsigned int temp;
	long unsigned int result=0;
	stringstream ss;
	for(unsigned int i =upperBound; i>lowerBound; i--){
		for(unsigned int j =i-1; j>=lowerBound;j--){
			temp=i*j;
			ss.str(string());
			ss << temp;
			if(CheckPalindrome(ss.str())&&temp>result){
				result=temp;
			}
		}
	}
	cout<< "the largest palendrome is: " <<result << endl;
	return 0;
}

bool CheckPalindrome(const string &toCheck){
	// takes a string and checks if its a palandrome
	// for even length strings the function checks all characters
	// for odd length strings it doesn't bother with the central string
	// the int division in for is intended
	unsigned int length = toCheck.length()-1;
	for(unsigned int i=0; i <= length/2 ; i++){
		if(toCheck[i]!=toCheck[length-i]){
			return false;
		}
	}
	return true;
}
