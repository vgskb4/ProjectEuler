#include <iostream>

#include "primes.hpp"

using std::cout;
using std::endl;
const int nthWanted=10001;

int main()
{
	long long unsigned int result;
	generateNthPrime(result,nthWanted);
	cout << "The "<<nthWanted<< " is: "<< result;
	return 0;
}
