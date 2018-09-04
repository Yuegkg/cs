/****************************************
 * Function: item.h
 * Description: this is header for save item information
 * parameters: name, unit, number, and price
 * **************************************/






#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;


class item
{
	private:
		string name;
		string unit;
		int num;
		float price;
	public:
		item();
		item(string,string,int,float);
		void dispItem();
		string getName(){
			return name;
		};
};
#endif
