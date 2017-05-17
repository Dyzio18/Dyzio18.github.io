#include "Predator.h"


void Predator::addToPreyList(Animal prey)
{
	preyList.push_back(prey);
}

void Predator::showPreyList()
{
	int size = preyList.size();
	for( int i = 0; i < size; i++ )
	{
		cout << "\n*******\n";
		cout << "ID: " << i << endl;
		preyList[ i ].showAnimal();
		cout << "\n*******\n";
	}
}