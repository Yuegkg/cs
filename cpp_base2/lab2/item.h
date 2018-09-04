#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class item{
	private:
		string product;
		string unit;
		int numBuy;
		float price;
	public:
		void dispItem();
		item(string,string,int,float );
		item();
		string getName() {
			return product;
		};
};



