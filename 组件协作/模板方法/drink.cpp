#include "drink.h"

void Drink::prepareRecipe()
{
	boilWater();
	brew();
	pureInCup();
	addCondiment();
}
