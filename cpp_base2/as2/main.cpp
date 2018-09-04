/******************************
 * Program Filename: Program
 * Author: Yue Fan
 * Date: 2017/7/17
 * Description: using dyn array to save the list, then you can change the list.
 * Input: item
 * output:list
 * ************************************/




#include <iostream>
#include <string>
#include <cstdlib>
#include "item.h"
#include "list.h"


using namespace std;




int main() {

	bool running = true;//make sure can do as many as you want to
	
list TheList;

	int op;//save your opetions
	while(running){
		cout << "1 add item, 2 rm item, 3 disp list, 4 end." << endl;
		cin >> op;
		if(op == 1) {
			TheList.addItem();
		}
		else if( op == 2) {
			TheList.rmItem();
		}
		else if( op == 3) {
			TheList.dispList(); 
		}
			else if( op == 4) {
				running = false;
			}
	}
	return 0;
}

