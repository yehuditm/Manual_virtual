#include "Animal.h"



Animal::Animal(string m_name)
{
	name = m_name;
}


Animal::~Animal()
{
}

void Animal::whoIAm()
{
	std::cout << "I'm an animal"<<endl;
}