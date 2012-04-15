#include <iostream>
#include <cmath>
using std::sqrt;
using std::cout;
using std::endl;


void testNumbers(const unsigned int &a,const unsigned int &b, unsigned int &c);
const unsigned int RESULT_REQUIRED =1000;
int main()
{
	bool found =false;
	unsigned int c;
	for(unsigned int a =1; !found; ++a){
		for (unsigned int b=a+1; b < RESULT_REQUIRED; ++b){
			testNumbers(a,b,c);
			if (c!=0){
				found =true;
				cout << "a: " << a << " b: " << b << " c: " << c << endl;
				cout << "The product results in : " << a*b*c << endl;
				break;
			}
		}
	}
	return 0;
}

void testNumbers(const unsigned int &a, const unsigned int &b, unsigned int &c)
{
	double d=sqrt(a*a+b*b);
	c=static_cast<int> (d);
	if(a+b+c != RESULT_REQUIRED){
		c=0;
	}
	if(c!=d){
		c=0;
	}
	return;
}
