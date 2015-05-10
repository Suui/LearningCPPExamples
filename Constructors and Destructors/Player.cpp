#include "string"
#include <iostream>


class Player
{
	std::string name;


public:

	Player()
	{
		std::cout << "Player object constructed" << std::endl;
		name = "Diplo";
	}

	~Player()
	{
		std::cout << "Player object destroyed" << std::endl;
	}

	std::string GetName() const { return name; }
};