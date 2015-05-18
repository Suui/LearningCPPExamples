#include "NormalArrayExample.h"
#include "Player.h"


int NormalArrayExample::getSize()
{
	return 2;
}

void NormalArrayExample::execute()
{
	std::cout << "\n==> Normal Array example" << std::endl;
	
	// Initialization with size 2, then set them up
	int Array[2];
	Array[0] = 0;
	Array[1] = 1;

	// Initialization with no size specified, but it knows it's 2
	int OtherArray[] = { 2, 3 };

	// You can't do the following! You need a dynamic array for that.
//	int LastArray[getSize()];
}