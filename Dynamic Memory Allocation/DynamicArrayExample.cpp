#include "DynamicArrayExample.h"
#include <iostream>


int DynamicArrayExample::getSize()
{
	return 4;
}


void DynamicArrayExample::execute()
{
	std::cout << "\n==> Dynamic Array Example" << std::endl;

	// Remember we couln't do the following with a normal array
	int* Array = new int[getSize()];

	for (int i = 0; i < getSize(); ++i)
	{
		Array[i] = i;
		std::cout << Array[i] << std::endl;
	}

	// And remember to delete the allocated array!
	delete Array;
}