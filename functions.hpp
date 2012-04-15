#ifndef _FUNCTIONS_HPP_
#define _FUNCTIONS_HPP_
#include <iostream>
#include "constants.hpp"
using std::cout;
using std::endl;


unsigned int multiplyDownRight(unsigned int const * const a)
{
	unsigned int result =*a;
	//cout << *a;
	for(unsigned int i=1; i<LENGTH_TO_MULTIPLY; ++i){
		int offset =(GRID_DIM+1)*i;
		//cout << "\t"<< *(a+offset);
		result*= *(a+offset);
	}
	//cout<<"\t"<< result<<endl;
	return result;
}

unsigned int getIndex(unsigned int i,unsigned int j)
{
	return i*GRID_DIM +j;
}

unsigned int multiplyLeftToRight(unsigned int const * const a)
{
	unsigned int result=*a;
	//cout << *a;
	for(unsigned int i=1; i<LENGTH_TO_MULTIPLY ;++i){
	//	cout <<"\t"<< *(a+i);
		result*=*(a+i);
	}
	//cout <<"\t" << result << endl;
	return result;
}
unsigned int multiplyUpRight(unsigned int const * const a)
{
	unsigned int result=*a;
	//cout <<*a;
	for(unsigned int i=1;i<LENGTH_TO_MULTIPLY; ++i){
		int offset = -(GRID_DIM-1)*i;
		//cout <<"\t"<< *(a+offset);
		result*= *(a+offset);
	}
	//cout <<"\t"<<result<<endl;
	return result;
}
#endif
