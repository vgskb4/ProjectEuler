#include <iostream>
using std::cout;
using std::endl;


int main()
{
	const unsigned int first = 3;
	const unsigned int second =5;
	const unsigned int maxValue =999;
	unsigned int sum=0;
	for(unsigned int i=1; i<=maxValue; ++i){
		if(i%first==0||i%second==0){
			sum+=i;
		}
	}
	cout <<sum << endl;
	return 0;
}


