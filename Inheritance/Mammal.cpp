#include "Mammal.h"


Mammal::Mammal()
{
	hp = 100;
	speed = 1.0;
	std::cout << "A mammal is created!" << std::endl;
}


Mammal::~Mammal()
{
	std::cout << "A mammal has fallen!" << std::endl;
}


void Mammal::Breath()
{
	std::cout << "Breath(): Breath in... Breath out" << std::endl;
}


void Mammal::Talk()
{
	std::cout << "Talk(): Mammal talk... override this function!" << std::endl;
}