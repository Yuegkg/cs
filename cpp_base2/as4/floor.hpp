/**************************************************
* Program:floor.cpp
* Author:Yue Fan
* Date:8/3/2017
* Description: Head function for floor
* Input: maze.txt
* Output: maze
* *********************************************/
#include<iostream>
#include<fstream>	
#include<string>
#include<iomanip>
#include<ctype.h>

using namespace std;



#ifndef FLOOR_HPP_
#define FLOOR_HPP_

class Floor
{
	public:
	char **array;
	int n;
	int m;
	Floor();
	void printfloor();
	void findrod(int &x, int &y);
	~Floor();
};

#endif
