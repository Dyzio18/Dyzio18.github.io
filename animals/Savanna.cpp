#include "Savanna.h"

void Savanna::ui()
{
vector<Animal> savanna;

int choose = 1;

	while(choose) 
	{
		cout << "1. Add animal" << endl;
		cout << "2. Show animals" << endl;
		cout << "0. Exit" << endl;


		cin >> choose;
		cout << "\n====================\n\n\n";

		switch (choose)
		{
			case 1 :
			{
				string typeIn, nameIn;
				int hp, def, att;

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

				break;
			}
			case 2 :
			{
		    	int size = savanna.size();
		    	for( int i = 0; i < size; i++ )
		    	{
		    		cout << "\n*******\n";
		    		cout << "ID: " << i << endl;
		        	savanna[ i ].showAnimal();
		        	cout << "\n*******\n";
		    	}
				break;
			}
		}


	}
}