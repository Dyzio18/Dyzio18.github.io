#include <iostream>
#include <string>
#include <string.h>

using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:

	string name;
	string type;
	int defence;
	int attack;

	string getType();
	void showAnimal();

	Animal(string type , string name, int def, int att);

	//virtual void addToPreyList(Animal prey);
//	virtual void showPreyList();
	//~Animal();
	
};

#endif