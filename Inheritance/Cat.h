#pragma once
#include "Mammal.h"


class Cat : public Mammal
{
public:

	Cat();

	~Cat();

	virtual void Talk() override;

	virtual void Walk() override;
};
