#include "Human.h"


Human::Human()
{
	std::cout << "A new human is born" << std::endl;
	civilized = true;
	speed = 2;	// This ctor runs after the base class', so we can change the speed value.
}


Human::~Human()
{
	std::cout << "The human has died" << std::endl;
}


void Human::Talk()
{
	std::cout << "Talk(): I'm good looking for a... human" << std::endl;
}


void Human::Walk()
{
	std::cout << "Walk(): Left, right, left, right at the speed of => " << speed << std::endl;
}


void Human::Attak(Human& Other)
{
	if (civilized)
		std::cout << "Attak(): Why would a human attack another? Je refuse." << std::endl;
	else
		std::cout << "Attak(): A human attacks another!" << std::endl;
}