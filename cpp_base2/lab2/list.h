#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "item.h"

using namespace std;


class list{
	private:
		item itemList[10];
		int numList;
		void fullList();
	public:
		void addItem();
		void rmItem();
		void dispList();
		list();
};

