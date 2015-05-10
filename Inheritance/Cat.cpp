#include "Cat.h"


Cat::Cat()
{
	std::cout << "A cat is born" << std::endl;
}


Cat::~Cat()
{
	std::cout << "The cat has died" << std::endl;
}


void Cat::Talk()
{
	std::cout << "Talk(): Meow!" << std::endl;
}


void Cat::Walk()
{
	std::cout << "Walk(): Left front paw & back right paw, right front paw & back left paw..at the speed of => " << speed << std::endl;
}