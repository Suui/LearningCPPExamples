#include "Player.h"


int main()
{
	// An object initialized with the new keyword will be dynamically allocated.
	// Initialization with the new keyword implies the use of a pointer. 
	// So we are creating a pointer, which points to our dynamically allocated object.

	Player* Player01 = new Player();	// Player01 constructed
	delete Player01;					// Player01 destructed


	// Using auto has no relation with DMA. Auto just gets automatically the type of the variable, so we
	// don't need to specify it. However, most of the time I would note use it if it's not easily readable.

	auto Player03 = Player();			// Normal Player03 constructed, not a pointer, not dynamically allocated.
	auto Player02 = new Player();		// Player02 constructed
	
	return 0;
}
