#include <iostream>

#include "constants.hpp"
#include "functions.hpp"


int main()
{
	unsigned int max=0;
	unsigned int current=0;
	const unsigned int *rootValue;

	for(unsigned int i=0; i<GRID_DIM;++i)
	{
		for(unsigned int j=0; j<GRID_DIM;j++){
			rootValue=&GRID_VALUES[getIndex(i,j)];
			if(j<=GRID_DIM-LENGTH_TO_MULTIPLY)
			{
				current=multiplyLeftToRight(rootValue);
				if(current>max){
					max=current;
				}
			
			if(i<=GRID_DIM-LENGTH_TO_MULTIPLY){
				current=multiplyDownRight(rootValue);
				if(current>max){
					max=current;
				}
			}
			if(i >= LENGTH_TO_MULTIPLY){
				current=multiplyUpRight(rootValue);
				if (current>max){
					max=current;
				}
			}
			}
		}
	}
	std::cout << max << std::endl;
	return 0;
}


