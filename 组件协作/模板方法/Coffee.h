#pragma once
#include <iostream>
using namespace std;

class Coffee
{
public:
	void boilWater() { cout << "boil water..." << endl; }
	void brewCoffeeGraids() { cout << "Dripping coffee through filter..." << endl; }
	void pureInCup() { cout << "Pouring into cup..." << endl; }
	void addSugerAndMilk() { cout << "Adding suger and milk to coffee..." << endl; }
	void prepareRecipe();
};

