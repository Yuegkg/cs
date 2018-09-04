/************************************
 * Function:list.h
 * Description: make the function add, remove and print. using *_array to save the list
 * parameters: numList, max
 * *****************************/




#ifndef LIST_H
#define LIST_H
#include<string>
#include"item.h"
#include<cstdlib>
#include<iostream>


using namespace std;

class list{
	private: //**array; //array = new int[n];
		int numList;
		int max;
		item *_array;//call dyn
		
	public:
		list();
		void addItem();
		void rmItem();
		void dispList();
};

#endif
