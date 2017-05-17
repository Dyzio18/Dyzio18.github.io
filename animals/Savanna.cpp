#include "Savanna.h"


Savanna::Savanna() {};

void Savanna::ui()
{

int choose = 1;

	while(choose) 
	{
		cout << "1. Add animal" << endl;
		cout << "2. Show animals" << endl;
		cout << "3. Animals Fight Club!" << endl;
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
		    case 3 :
			{
				fightAnimals();
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

void Savanna::fightAnimals()
{
	int id_1, id_2;

	cout << "What animal attack? (write ID) ";
	cin >> id_1;
	cout << "What animal defend? (write ID) ";
	cin >> id_2;

	/*if (savanna[ id_1 ].type == "Predator" && savanna[ id_1 ].attack > savanna[ id_2 ].defence )
	{	
		savanna[ id_1 ].addToPreyList(savanna[ id_2 ]);
		cout << " \nFIGHT! " << savanna[ id_1 ].name << " eat " << savanna[ id_2 ].name << endl;
		cout << "\nIt's pray list of this predator: "<< endl;
		savanna[ id_1 ].showPreyList();
	} */
	
	cout << "\n\nMatch or escape!\n\n";
}
