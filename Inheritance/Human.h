#pragma once
#include "Mammal.h"


class Human : public Mammal
{
	// Data member unique to the Humans.
	bool civilized;

public:

	Human();

	~Human();

	virtual void Talk() override;

	virtual void Walk() override;

	// Member function unique to the human derivative
	void Attak(Human& Other);
};
