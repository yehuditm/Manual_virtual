#include "Animal.h"



Animal::Animal(string m_name)
{
	name = m_name;
}


Animal::~Animal()
{
}

string Animal::whoIAm()
{
	return "I'm an animal, and my name is " + name;
}