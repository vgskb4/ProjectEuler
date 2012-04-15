#include <iostream>
#include <vector>
#include "primes.hpp"

using std::vector;
using std::cout;
using std::endl;

typedef long unsigned int myInt;

const long unsigned int MAX_VALUE = 2000000;

int main(){
	vector<myInt> primes;
	generateTruncatedPrimeList(primes,MAX_VALUE);
	myInt sum=0;
	for(unsigned int i=0;i<primes.size();++i){
		sum+=primes[i];
	}
	cout << primes.size();
	cout << "The sum of all primes less than " << MAX_VALUE <<" is "<< sum <<endl;
	return 0;
}
