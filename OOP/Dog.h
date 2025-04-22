#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	//create a constructor
	void Travel() override;
	void Speak() override;

	//create a protected property unique to Dog
};
