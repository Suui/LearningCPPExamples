#include "NormalArrayExample.h"
#include "Player.h"


void NormalArrayExample::execute()
{
	std::cout << "\n==> Normal Players Array example" << std::endl;
	// The objects contained in an array will be constructed using its default ctor at first.
	Player PlayerArray[2];
	std::cout << "==> Normal Players Array created! Size = 2" << std::endl;

	std::cout << "\n==> Replacing the initialized players in the array" << std::endl;
	PlayerArray[0] = Player();
	PlayerArray[1] = Player();
}