#include <iostream>
#include "Coffee.h"
#include "Tea.h"
#include "drink.h"

using namespace std;

int main() {
	/*Tea t;
	t.prepareRecipe();
	Coffee c;
	c.prepareRecipe();*/

	// 使用模板模式重构
	Drink* d = new Tea2();
	d->prepareRecipe();
	d = new Coffee2;
	d->prepareRecipe();

	return 0;
}