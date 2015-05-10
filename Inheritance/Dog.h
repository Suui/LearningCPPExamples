#pragma once
#include "Mammal.h"


class Dog : public Mammal
{
public:

	Dog();

	~Dog();

	virtual void Talk() override;

	virtual void Walk() override;
};
