/**************************************************
 * Program:floor.cpp
 * Author:Yue Fan
 * Date:8/3/2017
 * Description: This function read the maz.test and print it
 * Input: maze.txt
 * Output: maze
 * *********************************************/

#include<iostream>
#include<fstream>	
#include<string>
#include<iomanip>
#include<ctype.h>
#include "floor.hpp"

using namespace std;

Floor::Floor()
{
	char c;
	int c1;
	int c2;
	ifstream input;

	input.open("maze.txt");
	
	if(input.is_open())//read first teo number for creat array for save maze
	{
		//inputFile >> n;
		input >> c1;
		n = c1;
		this->array = new char *[c1];
		input >> c2;
		m = c2;


		for (int i = 0; i < c1; i++) {
			this->array[i] = new char[c2];
		}




		for (int i = 0; i<n; i++)
		{
			input >> array[i][0];
			input >> noskipws;
			for (int p = 1; p<m; p++)
			{
				input >> array[i][p];
			}
			input >> ws;

		}


	
		input.close();

	}
		
	else
	{
		cout<<"open file error\n";
	}
	
}


Floor::~Floor()//free memaber
{
	for(int i=0;i<n;i++)
	{
		delete [] array[i];
	}
	delete [] array;
}

void Floor::printfloor()
{
	cout << endl;
	for(int i=0;i<n;i++)
	{
		for(int o=0;o<m;o++)
		{
			cout << array[i][o];
		}
		cout << endl;
	}
}

void Floor::findrod(int &x, int &y)//determine is here have
	{

	for(int i=0;i<n;i++)
		{
		for(int p=0;p<m;p++)
			{
			if(array[i][p]==' ')
				{			
				x=i;
				y=p;
				}
			}
		}
	
	array[x][y]=' ';	

	}	
