#ifndef _PRIMES_HPP_
#define _PRIMES_HPP_
#include <vector>
using std::vector;
template <class T>
void generateNthPrime(T &result,const unsigned int &thPrime)
{
	// generates a list of primes upto but not including
	// maxValue stores result in result
	
	vector<T> temp;
	temp.reserve(thPrime);
	temp.push_back(2); // taking care of special cases
	bool isPrime=true;
	double upperBound;
	for(unsigned long int i=3;temp.size()<thPrime; i+=2){
		// starts odd and increments by 2 
		for(unsigned long int j=0;j<temp.size();++j){
			if(i%temp[j]==0){
				isPrime=false;
				break;
			}
			upperBound=static_cast<double>(i)/temp[j];
			if(temp[j+1]>upperBound){
				isPrime=true;
				break;
			}
		}
		if(!isPrime)
		{
			continue;
		}
		temp.push_back(i);
	}
	result=temp.back();
	return;
}



#endif
