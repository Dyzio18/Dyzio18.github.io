#include <stdlib.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstddef>

#include "Savanna.h"			
#include "Animal.h"			
#include "Predator.h"	
#include "Prey.h"	

using namespace std;


int main()
{
	Savanna* savanna =  new Savanna();
	savanna->ui();

	cout << "\n\n\n Return success! \n\n\n";
	return 0;
}

