#include "Player.h"


void ModifyValue(int& value)
{
	value = 15;
}


int main()
{
	// An object initialized with the new keyword will be dynamically allocated.
	// Initialization with the new keyword implies the use of a pointer. 
	// So we are creating a pointer, which points to our dynamically allocated object.

	Player* Player01 = new Player();	// Player01 constructed
	delete Player01;					// Player01 destructed


	// Using auto is of no mean. Auto just gets automatically the type of the variable, 
	// so we don't need to specify it.

	auto Player03 = Player();			// Normal Player03, not a pointer, not dynamically allocated, constructed
	auto Player02 = new Player();		// Player02 constructed
	
	int MyValue = 20;
	ModifyValue(MyValue);
	std::cout << "My Value = " << MyValue << std::endl;

	std::cout << "Program end!" << std::endl;
	return 0;
}
