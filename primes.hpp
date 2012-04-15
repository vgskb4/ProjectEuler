#ifndef _PRIMES_HPP_
#define _PRIMES_HPP_
#include <vector>
using std::vector;
typedef long long unsigned int myInt;
void generateTruncatedPrimeList(vector<myInt> &result,myInt maxValue)
{
	// generates a list of primes upto but not including
	// maxValue stores result in result
	result.reserve(512);
	result.push_back(2); // taking care of special cases
	bool isPrime=true;
	float upperBound;
	for(unsigned long int i=3;i<maxValue; i+=2){
		// starts odd and increments by 2 
		for(unsigned long int j=0;j<result.size();++j){
			if(i%result[j]==0){
				isPrime=false;
				break;
			}
			upperBound=static_cast<float>(i)/result[j];
			if(result[j+1]>upperBound){
				isPrime=true;
				break;
			}
		}
		if(!isPrime)
		{
			continue;
		}
		result.push_back(i);
	}
}

#endif
