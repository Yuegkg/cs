/**************************************************
 * Program:Floor.cpp
 * Author:Yue Fan
 * Date:8/14/2017
 * Description: This function read the maz.test and print it
 * Input: maze.txt
 * Output: maze
 * *********************************************/

#include<iostream>
#include<fstream>	
#include<string>
#include<iomanip>
#include<ctype.h>
#include "Floor.hpp"

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

void Floor::newFloor(string sss)
{

	/*delete the old maze*/

	for (int i = 0; i<n; i++)
		delete[] array[i];
	delete[] array;


	/*open the file*/

	ifstream inputFile;
	inputFile.open(sss.c_str());

	/*detect if file is open*/

	if (inputFile)
	{
		inputFile >> n;
		inputFile >> m;

		/*crete the array to hold the floor*/

		array = new char*[n];
		for (int i = 0; i<n; i++)
		{
			array[i] = new char[m];
		}

		/*read information from file*/

		char c;
		for (int i = 0; i<n; i++)
		{
			inputFile >> array[i][0];
			inputFile >> noskipws;
			for (int p = 1; p<m; p++)
			{
				inputFile >> array[i][p];
			}
			inputFile >> ws;

		}

		/*close the file*/

		inputFile.close();


	}


	/*report if meet mistake*/

	else
	{
		cout << "\nmeet error when open file\n";
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


bool Floor::isRight()
{

	/*set and initialize the booling variable*/

	bool right;
	right = true;

	/*find if there is some mistake*/

	for (int i = 0; i<n; i++)
	{
		for (int p = 0; p<m; p++)
		{

			if (array[i][p] == '#' || array[i][p] == 'L');
			else if (array[i][p] == 'D' || array[i][p] == 'W' || array[i][p] == 'k');
			else if (array[i][p] == 'E' || array[i][p] == 'X' || array[i][p] == ' ');

			else
			{
				right = false;
			}
		}
	}

	/*report the result*/

	return right;
}

void Floor::printfloor()
{
	cout << endl;
	for (int i = 0; i<n; i++)
	{
		for (int o = 0; o<m; o++)
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

void Floor::findP(int &x, int &y)
{

	for (int i = 0; i<n; i++)
	{
		for (int p = 0; p<m; p++)
		{
			if (array[i][p] == 'P')
			{
				x = i;
				y = p;
			}
		}
	}

	array[x][y] = ' ';

}

void Floor::findW(int &x, int &y)
{

	for (int i = 0; i<n; i++)
	{
		for (int p = 0; p<m; p++)
		{
			if (array[i][p] == 'W')
			{
				x = i;
				y = p;
			}
		}
	}

	array[x][y] = ' ';

}
