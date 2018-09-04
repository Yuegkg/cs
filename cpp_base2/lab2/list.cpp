#include "list.h"
#include "item.h"
using namespace std;


list::list() { 	
numList = 0; 
}

void list::fullList() {
	cout << "The list is full, please remove an item to continue." << endl;
}

void list::addItem() {
	if(numList == 9) {
		fullList();
       	}
	else{
	string tempName;
	string tempUnit;
	int tempNum;
	float tempPrice;

	cout << "Product name?" << endl;
	cin.ignore(256,'\n');
	getline(cin, tempName);
	cout << "Unit?" << endl;
	getline(cin, tempUnit);
	cout << "Number to buy?" << endl;
	cin >> tempNum;
	cout << "Price?" << endl;
	cin >> tempPrice;

	item p(tempName,tempUnit,tempNum,tempPrice);
	itemList[numList] = p; 
	numList++; 
	}
}


void list::rmItem() {
string rmName;
cout << "What item would you like to remove?" << endl;
cin.ignore(256,'\n');
getline(cin, rmName);
for(int i = 0; i < numList; i++) {
	if(itemList[i].getName() == rmName) {
		for(int j = i; j < numList; j++) {
			itemList[j] = itemList[++j];
		}
		numList--;
	}
} 
}

void list::dispList() {
	for(int i = 0; i < numList; i++) {
		itemList[i].dispItem();
	}
}











