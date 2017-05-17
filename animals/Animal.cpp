#include "Animal.h"

Animal::Animal(string type = "undefined" , string name = "noname", int def = 10 , int att = 10)
{
	this->type = type;
	this->name = name;
	this-> defence = def;
	this->attack = att;
};



string Animal::getType()
{
	return this->type;
};

void Animal::showAnimal()
{
	cout << "Name: " << this->name  << endl;
	cout << "Type: " << this->type  << endl;
	cout << "Def/Att: " << this->defence  <<"/"<<this->attack<< endl;
};