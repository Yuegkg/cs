#include <iostream>
#include <string>
#include <cstdlib>
#include "item.h"
#include "list.h"


using namespace std;




int main() {
	bool running = true;
list myList;
	int opetions;
	while(running){
		cout << "1 add item, 2 rm item, 3 disp list, 4 end." << endl;
		cin >> opetions;
		if(opetions == 1) {
			myList.addItem();
		}
		else if( opetions == 2) {
			myList.rmItem();
		}
		else if( opetions == 3) {
			myList.dispList(); 
		}
			else if( opetions == 4) {
				running = false;
			}
	}
	return 0;
}
