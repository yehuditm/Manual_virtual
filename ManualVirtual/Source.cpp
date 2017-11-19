#include <iostream>
#include "Dog.h"
#include "Cat.h"
using namespace std;

/*
The function gets a pointer to animal and print who is.
If he points to the cat, it will print the function of the cat 
and if it is a dog show will print the function of the animal.
*/
void printWhoIAm(Animal *animal)
{
	string msg = "";
	if (Cat* v = dynamic_cast<Cat*>(animal)) {
		msg = v->Cat::whoIAm();
	}
	else if(Dog* d=dynamic_cast<Dog*>(animal))
		msg = d->Animal::whoIAm();
	cout << msg << endl;
}

int main()
{
	Animal * a = new Dog("Kay");
	Animal *b = new Cat("Mitzi");
	printWhoIAm(a);
	printWhoIAm(b);
	return 0;
}