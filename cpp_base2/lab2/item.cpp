#include "item.h"

using namespace std;

item::item(){
	product = "broken";
		unit = "broken";
		price = 0.00;
		numBuy = 0;
}

item::item(string name, string newUnit, int num, float newPrice) {
	product = name;
	unit = newUnit;
	numBuy = num;
	price = newPrice;
}

void item::dispItem() {
	cout << product << endl;
	cout << unit << endl;
	cout << price << endl;
	cout << numBuy << endl;
}



