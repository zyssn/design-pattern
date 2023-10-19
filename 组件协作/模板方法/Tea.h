#pragma once
#include <iostream>
using namespace std;

class Tea
{
public:
	Tea() { cout << "¿ªÊ¼ÅÝ²è¡£¡£¡£" << endl; };
	void boilWater() { cout << "Boil water..." << endl; }
	void steepTeaBag() { cout << "Stepping the tea..." << endl; }
	void pureInCup() { cout << "Pouring into cup..." << endl; }
	void addLemon() { cout << "Adding lemon to tea..." << endl; }
	void prepareRecipe();

	virtual ~Tea() { cout << "ÅÝ²è½áÊø" << endl; }
};

