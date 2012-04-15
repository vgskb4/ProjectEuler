#include <iostream>
using std::cout;
using std::endl;
typedef long long unsigned int myInt;

const unsigned int maxValue=100;
const unsigned int minValue= 1;

int main(){
	myInt SumSquares=0;
	myInt SquaredSum=0;
	for(unsigned int i= minValue; i<=maxValue; ++i)
	{
		SumSquares+=i*i;
		SquaredSum+=i;
	}
	SquaredSum*=SquaredSum;
	cout << SquaredSum - SumSquares<< endl;
	return 0;
}
