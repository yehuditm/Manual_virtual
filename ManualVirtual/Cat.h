#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(string m_name);
	void whoIAm() override;
	~Cat();
};

