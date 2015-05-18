#include "Player.h"


void NewKeywordExample();

void NormalArrayExample();


int main()
{
	NewKeywordExample();
	std::cout << "==> New Keyword example got out of scope right before this statement\n" << std::endl;

	NormalArrayExample();
	std::cout << "==> Normal array example got out of scope right before this statement\n" << std::endl;
	
	return 0;
}


void NewKeywordExample()
{
	std::cout << "==> New Keyword Example, ctors and dtors will be acting" << std::endl;
	// An object initialized with the new keyword will be dynamically allocated.
	// Initialization with the new keyword implies the use of a pointer. 
	// So we are creating a pointer, which points to our dynamically allocated object.

	Player* Player01 = new Player();	// Player01 constructed
	delete Player01;					// Player01 destructed


	// Using auto has no relation with DMA. Auto just gets automatically the type of the variable, so we
	// don't need to specify it. However, most of the time I would note use it if it's not easily readable.

	auto Player02 = Player();			// Normal Player03 constructed, not a pointer, not dynamically allocated.
	auto Player03 = new Player();		// Player02 constructed

	delete Player03;	// Without this delete, the Player03 object would stay in allocated in memory
	// even after our program ends. It won't be destroyed when out of scope!
	std::cout << "==> New Keyword Example finished!" << std::endl;
}


void NormalArrayExample()
{
	std::cout << "\n==> Normal Players Array example" << std::endl;
	// The objects contained in an array will be constructed using its default ctor at first.
	Player PlayerArray[2];
	std::cout << "\n==> Normal Players Array created! Size = 2\n" << std::endl;

	std::cout << "\n==> Seting up " << std::endl;
	PlayerArray[0] = Player();
	PlayerArray[1] = Player();
}
