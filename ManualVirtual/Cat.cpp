#include "Cat.h"

Cat::Cat(string m_name): Animal(m_name)
{
}

Cat::~Cat()
{
}

string Cat::whoIAm()
{
	return "I'm a cat, and my name is " + name;
}