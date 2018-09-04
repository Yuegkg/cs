/**************************************************
* Program:main.cpp
* Author:Yue Fan
* Date:8/3/2017
* Description: this is main fuction, read the user input
* Input: user input
* Output: maze
* *********************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include<fstream>
#include "floor.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
	
	Floor floo;
	floo.printfloor();
	
	
	return 0;
}