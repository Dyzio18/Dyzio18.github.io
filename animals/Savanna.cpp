#include "Savanna.h"


Savanna::Savanna() {};

void Savanna::ui()
{

int choose = 1;

	while(choose) 
	{
		cout << "1. Add animal" << endl;
		cout << "2. Show animals" << endl;
		cout << "2. Animals Fight Club!" << endl;
		cout << "0. Exit" << endl;

		cin >> choose;
		cout << "\n====================\n\n\n";

		switch (choose)
		{
			case 1 :
			{
				createAnimal();
				break;
			}
			case 2 :
			{
				showAnimals();
				break;
			}
		}
	}
}

void Savanna::createAnimal()
{
	string typeIn, nameIn;
	int def, att;

	cout << "Set name: ";
	cin >> nameIn;
	cout << "It's predator? T/N: ";
	cin >> typeIn;
	cout << "Set attack point: ";
	cin >> def;
	cout << "Set defence point: ";
	cin >> att;

	if (typeIn == "t" || typeIn == "T")
	{
		typeIn = "Predator";
		Predator createdAnimal = Predator(typeIn, nameIn, def, att);
		savanna.push_back(createdAnimal);
		createdAnimal.showAnimal();
	}
	else
	{
		typeIn = "Prey";
		Prey createdAnimal2 = Prey(typeIn, nameIn, def, att);
		savanna.push_back(createdAnimal2);
		createdAnimal2.showAnimal();
	}
	cout << "\nAnimal created witch success!\n" << endl;

}

void Savanna::showAnimals()
{
	int size = savanna.size();
	for( int i = 0; i < size; i++ )
	{
		cout << "\n*******\n";
		cout << "ID: " << i << endl;
		savanna[ i ].showAnimal();
		cout << "\n*******\n";
	}
}

void Savanna::fightAnimals(Animal animal_1, Animal animal_2)
{
	/*if (animal_1->type == "Predator")
	{
		animal_1->attack >= animal_2->defence;


	}*/
}
