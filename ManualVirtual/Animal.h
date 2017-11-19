#pragma once
#include <string>
using namespace std;

class Animal
{
protected:
	string name;

public:
	Animal(string m_name);
	~Animal();
	virtual string whoIAm();
};

