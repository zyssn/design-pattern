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

	// ʹ��ģ��ģʽ�ع�
	Drink* d = new Tea2();
	d->prepareRecipe();
	d = new Coffee2;
	d->prepareRecipe();

	return 0;
}