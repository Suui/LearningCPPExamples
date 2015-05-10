#include "Dog.h"


Dog::Dog()
{
	std::cout << "A dog is born!" << std::endl;
}


Dog::~Dog()
{
	std::cout << "The dog died!" << std::endl;
}


void Dog::Talk()
{
	std::cout << "Talk(): Woof!" << std::endl;
}


void Dog::Walk()
{
	std::cout << "Walk(): Left front paw & back right paw, right front paw & back left paw..at the speed of => " << speed << std::endl;
}