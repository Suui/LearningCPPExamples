#include "Human.h"
#include "Cat.h"
#include "Dog.h"


void PrintSeparator()
{
	std::cout << "--------------------------------------------------------------------------------" << std::endl;
}


int main()
{
	Human human;
	human.Breath();
	human.Talk();
	human.Walk();

	PrintSeparator();

	Cat cat;
	cat.Breath();
	cat.Talk();
	cat.Walk();

	PrintSeparator();

	Dog dog;
	dog.Breath();
	dog.Talk();
	dog.Walk();

	PrintSeparator();
}