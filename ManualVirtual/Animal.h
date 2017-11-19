#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal
{
protected:
	string name;

public:
	Animal(string m_name);
	~Animal();
	virtual void whoIAm();
};

