#include "Animal.h"
#include <vector>
#include <iostream>
#include <cstddef>

#ifndef PREY_H
#define PREY_H

class Prey : public Animal
{
public:

	Prey(string type , string name, int def, int att)
	 : Animal (type, name, def, att){};
	//~Predator();
	
};

#endif // PREY_H
