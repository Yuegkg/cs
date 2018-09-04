/*************************************
 * Function:item.cpp
 * Description: save the information for item
 *
 * **************************************/






#include<iostream>
#include<string>
#include "item.h"


using namespace std;


item::item(){
	name = "non";
	unit = "non";
	num = 0.00;
	price = 0;
}


item::item(string name1, string unit1, int num1, float price1) {
	name = name1;
	unit = unit1;
	num = num1;
	price = price1;
}


void item::dispItem() {
	cout << "name	unit	num	price" << endl;
	cout << name << "	" << unit << "	" << num << "	" << price << endl;
}




