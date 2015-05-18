#include "Player.h"
#include <string>


Player::Player()
{
	std::cout << "Player " << Name << " created!" << std::endl;
	Name = "NoName";
}


Player::Player(std::string InputName)
{
	Name = InputName;
}


Player::~Player()
{
	std::cout << "Player " << Name << " destroyed!" << std::endl;
}