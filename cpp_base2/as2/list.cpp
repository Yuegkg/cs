/**************************************************
 * Function: list.cpp
 * Description: there have call array, and have function for add remove and display
 *
 * ***********************************************/






#include<iostream>
#include<string>
#include"item.h"
#include"list.h"

using namespace std;

list::list(){
	numList = 0;
	max = 10;
	_array = new item[max];//make a new array
}

void list::addItem(){

	string tempName;
	string tempUnit;
	int tempNum;
	float tempPrice;

	cout << "Product name?" << endl;
	cin.ignore(256,'\n');
	getline(cin, tempName);
	if (numList > 0) {	//check the input is it same.
		for (int i = 0; i < numList; i++)
		{
			if (_array[i].getName() == tempName) {
				cout << " Name duplicated! Please try again..." << endl;
				getline(cin, tempName);
			}
		}
	}
	cout << "Unit?" << endl;
	getline(cin, tempUnit);
	cout << "Number to buy?" << endl;
	cin >> tempNum;
	cout << "Price?" << endl;
	cin >> tempPrice;

	item p(tempName,tempUnit,tempNum,tempPrice);
	_array[numList] = p; 
	numList++; 
}


void list::rmItem() {
	string rmName;
	cout << "What item would you like to remove?" << endl;
	cin.ignore(256,'\n');
	getline(cin, rmName);
	for(int i = 0; i < numList; i++) {
		if(_array[i].getName() == rmName) {
			for(int j = i; j < numList; j++) {
				_array[j] = _array[++j];
			}
			numList--;
		}
	} 
}



void list::dispList() {
	for(int i = 0; i < numList; i++) {
		_array[i].dispItem();
	}
}
