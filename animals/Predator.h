#include "Animal.h"
#include <vector>
#include <iostream>
#include <cstddef>

#ifndef PREDATOR_H
#define PREDATOR_H

class Predator : public Animal
{
public:

	vector<Animal> preyList;

	void addToPreyList(Animal prey);
	void showPreyList();

	Predator(string type , string name, int def, int att)
	 : Animal (type, name, def, att){};
	//~Predator(); /*Destructor*/
	
};

#endif
