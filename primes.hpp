#ifndef _PRIMES_HPP_
#define _PRIMES_HPP_
#include <vector>
using std::vector;
template <class T>
void generateTruncatedPrimeList(vector<T> &result,T maxValue)
{
	// generates a list of primes upto but not including
	// maxValue stores result in result
	result.reserve(512);
	result.push_back(2); // taking care of special cases
	bool isPrime=true;
	double upperBound;
	for(unsigned long int i=3;i<maxValue; i+=2){
		// starts odd and increments by 2 
		for(unsigned long int j=0;j<result.size();++j){
			if(i%result[j]==0){
				isPrime=false;
				break;
			}
			upperBound=static_cast<double>(i)/result[j];
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
