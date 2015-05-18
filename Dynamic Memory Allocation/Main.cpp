#include "Player.h"
#include "NewKeywordExample.h"
#include "NormalArrayExample.h"


int main()
{
	NewKeywordExample().execute();
	std::cout << "==> New Keyword example got out of scope right before this statement\n" << std::endl;

	NormalArrayExample().execute();
	std::cout << "==> Normal array example got out of scope right before this statement\n" << std::endl;
	
	return 0;
}
