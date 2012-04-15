#include <iostream>
#include <vector>
// solves problem 5 from projecteuler

#include "primes.hpp"
#include "problemCriteria.hpp"
using std::cout;
using std::endl;
using std::vector;

typedef unsigned int myIter;
typedef long long unsigned int myInt;
const myInt lowerLimit=1;
const myInt upperLimit=20;


int main()
{
	vector <myInt> primes;
	generateTruncatedPrimeList(primes,upperLimit);
	myInt minValue = 1;
	myInt maxValue = 1;
	for(myIter i=0; i<primes.size();++i){
		if(primes[i]<lowerLimit){
			continue;
		}
		minValue*=primes[i];
	}
	for(myIter i=minValue; ;i+=2){ //any non trivial solution will contain an even number
		if(meetsProblemCriteria(i,lowerLimit,upperLimit)){
			cout << i << " meets the problem criteria"<<endl;
			return 0;
		}

	}
	return 0;
}


