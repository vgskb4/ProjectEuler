#include <iostream>
#include <cmath>
#include <vector>
using std::cout;
using std::vector;
using std::endl;
using std::sqrt;
unsigned int GetNumberDivisors(long unsigned int cat);
const unsigned int NUMBER_DIVSIORS = 500;

int main()
{
	long unsigned int monkey;
	for(unsigned int i=1; ;++i){
		monkey+=i;
		if(GetNumberDivisors(monkey)>NUMBER_DIVSIORS){
			break;
		}
		
	}
	cout <<monkey<<endl;
	return 0;
}

unsigned int GetNumberDivisors(long unsigned int cat)
{
	unsigned int result=0;
	for(unsigned int dog=1;dog<sqrt(cat);++dog){
		if(cat%dog==0){
		//	cout << dog << "\t"<< cat/dog;
			
			result +=2;
		}
	}
	return result;
}
