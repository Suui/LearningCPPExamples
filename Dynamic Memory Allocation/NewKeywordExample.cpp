#include "NewKeywordExample.h"
#include <iostream>
#include "Player.h"


void NewKeywordExample::execute()
{
	std::cout << "==> New Keyword Example, ctors and dtors will be acting" << std::endl;


	// An object initialized with the new keyword will be dynamically allocated.
	// Initialization with the new keyword implies the use of a pointer. 
	// So we are creating a pointer, which points to our dynamically allocated object.

	Player* Ronny = new Player("Ronny");	// Player01 constructed
	delete Ronny;							// Player01 destructed


	// Using auto has no relation with DMA. Auto just gets automatically the type of the variable, so we
	// don't need to specify it. However, most of the time I would note use it if it's not easily readable.

	auto Angelo = Player("Angelo");			// Normal Player03 constructed, not a pointer, not dynamically allocated.
	auto Jose = new Player("Jose");			// Player02 constructed

	delete Jose;	// Without this delete, the Player03 object would stay in allocated in memory
					// even after our program ends. It won't be destroyed when out of scope!
	std::cout << "==> New Keyword Example finished!" << std::endl;
}