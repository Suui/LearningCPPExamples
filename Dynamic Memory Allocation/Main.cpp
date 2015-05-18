#include "Player.h"
#include "NewKeywordExample.h"
#include "NormalArrayExample.h"
#include "DynamicArrayExample.h"


int main()
{
	NewKeywordExample().execute();
	std::cout << "==> New Keyword example got out of scope right before this statement\n" << std::endl;

	NormalArrayExample().execute();
	std::cout << "==> Normal Array example got out of scope right before this statement\n" << std::endl;

	DynamicArrayExample().execute();
	std::cout << "==> Dynamic Array example got out of scope right before this statement\n" << std::endl;
	
	return 0;
}
