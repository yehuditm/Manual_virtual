#include <iostream>
#include "Dog.h"
#include "Cat.h"
using namespace std;

/*
The function gets a pointer to animal and print who is.
If he points to the cat, it will print the function of the cat
and if it is a dog show will print the function of the animal.
*/
void printWhoIAm(Animal *obj)
{
	int* vptr = *(int**)obj;
	((void(*)()) vptr[0])();

}

int main()
{
	Animal * a = new Dog("Kay");
	Animal *b = new Cat("Mitzi");
	printWhoIAm(a);
	printWhoIAm(b);
	return 0;
}