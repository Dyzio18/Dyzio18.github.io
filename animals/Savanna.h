#include "Animal.h"			
#include "Predator.h"	
#include "Prey.h"	

using namespace std;

#ifndef SAVANNA_H
#define SAVANNA_H

class Savanna
{
public:
	
	vector<Animal> savanna;

	void ui();

	void createAnimal();
	void showAnimals();

	void fightAnimals();

	Savanna();
//	~savanna();
	
};
#endif