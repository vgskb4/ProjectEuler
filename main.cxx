#include <iostream>
#include <vector>

#include "fib.hpp"
using std::vector;
using std::cout;
using std::endl;


typedef long unsigned int myInt;

const myInt max = 4000000;


int main()
{
	vector<myInt> FibNumbers;
	generateTruncatedFibSeq(FibNumbers,max);
	myInt sum=0;
	for(unsigned int i=0;i<FibNumbers.size();++i){
		if (FibNumbers[i]&1){
			continue;
		}
		sum += FibNumbers[i];
	}
	cout << sum<<endl;
}
