#include <iostream>
using std::cout;
using std::endl;

const unsigned int max = 4E6;
const unsigned int first=1;
const unsigned int second=2;


int main()
{
	unsigned int prev=first;
	unsigned int current=second;
	unsigned int sum =0;
	unsigned int temp;

	while(current<max)
	{
		if(!(1&current)){
			sum+=current;
		}
		temp = prev;
		prev = current;
		current+=temp;
	}
	cout << sum<<endl;
}
