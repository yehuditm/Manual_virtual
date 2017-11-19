#include "Cat.h"
#include <iostream>

Cat::Cat(string m_name): Animal(m_name)
{
}

Cat::~Cat()
{
}

void Cat::whoIAm()
{
	std::cout << "I'm a cat"<<endl;
}