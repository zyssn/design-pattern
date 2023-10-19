#pragma once
#include <iostream>
using namespace std;

class Drink {
public:
	void boilWater() { cout << "boil water..." << endl; }
	virtual void brew() = 0;
	void pureInCup() { cout << "Pouring into cup..." << endl; }
	virtual void addCondiment() = 0;
	void prepareRecipe();
};

class Coffee2 :public Drink {
public:
	Coffee2() { cout << "³å¿§·È..." << endl; }
	void boilWater() { cout << "boil water...." << endl; }
	void brew() override final {
		cout << "Dripping coffee through filter..." << endl;
	}

	void addCondiment() override final {
		cout << "Adding suger and milk to coffee..." << endl;
	}
};

class Tea2 :public Drink {
public:
	Tea2() { cout << "³å²è..." << endl; }
	void brew() override {
		cout << "Stepping the tea..." << endl;
	}

	void addCondiment() override {
		cout << "Adding lemon to tea..." << endl;
	}
};