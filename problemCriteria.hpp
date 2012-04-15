#ifndef _PROBLEM_CRITERIA_HPP_
#define _PROBLEM_CRITERIA_HPP_

typedef long long unsigned int myInt;

bool meetsProblemCriteria(const myInt &value,
		const myInt &lowerLimit,
		const myInt &upperLimit)
{
	for(myInt i=lowerLimit;i<=upperLimit;++i){
		if(value%i!=0){
			return false;
		}
	}
	return true;
}
#endif
