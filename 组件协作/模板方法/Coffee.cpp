#include "Coffee.h"

void Coffee::prepareRecipe()
{
	boilWater();
	brewCoffeeGraids();
	pureInCup();
	addSugerAndMilk();
}
