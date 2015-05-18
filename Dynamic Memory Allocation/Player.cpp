#include "Player.h"
#include <string>


Player::Player()
{
	Name = "NoName";
	std::cout << "Player " << Name << " created!" << std::endl;
}


Player::Player(std::string InputName)
{
	Name = InputName;
	std::cout << "Player " << Name << " created!" << std::endl;
}


Player::~Player()
{
	std::cout << "Player " << Name << " destroyed!" << std::endl;
}