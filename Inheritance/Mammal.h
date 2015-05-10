#pragma once
#include <iostream>


class Mammal
{
	// Protected variables are just like Private ones with a single difference.
	// Protected variables are accessible in derived subclass also, while Private variables aren't.
protected:

	int hp;
	double speed;

public:

	// This constructor(super) will run FIRST before derived class constructors.
	Mammal();

	~Mammal();

	// Common functions to all derived classes
	void Breath();

	virtual void Talk();

	virtual void Walk() = 0;
};
