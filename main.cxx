#include <iostream>
#include <vector>
#include <cmath>

#include "primes.hpp"

using std::vector;
using std::cout;
using std::endl;

typedef long long unsigned int myInt;

const myInt toFactor = 600851475143;

int main ()
{

	myInt maxSize = static_cast<myInt>(sqrt(toFactor));
	vector<myInt> sequence;
	generateTruncatedPrimeList(sequence,maxSize);
	for(myInt i=0; i<sequence.size();++i){
		if(toFactor%sequence[i]==0){
			cout << sequence[i] << " ";
		}
	}
	cout <<endl;

	return 0;
}


