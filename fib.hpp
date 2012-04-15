#ifndef _FIB_HPP_
#define _FIB_HPP_

#include <vector>
using std::vector;
template <class T>
void generateTruncatedFibSeq(vector<T> &result,const T maxValue){
	//calculates and stores in the vector result the fib sequence
	//up to but not including max value;
	
	result.push_back(1);
	result.push_back(2);
	T current;
	while(true){
		current=result[result.size()-2]+result[result.size()-1];
		if(current>maxValue)
			break;
		result.push_back(current);
	}
	return;
}

#endif
