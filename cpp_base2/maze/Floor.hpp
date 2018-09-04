#include<iostream>
#include<fstream>	
#include<string>
#include<iomanip>
#include<ctype.h>

using namespace std;



#ifndef FLOOR_HPP_
#define FLOOR_HPP_


/********************************************************
 *							*
 * Class Floor						*
 * This struct will storge a floor a maze and vaild it	*
 * 							*
 *******************************************************/


 							
class Floor
	{

	public:
	
	/*variable*/

	char **array;
	int n;
	int m;

	Floor();
	void newFloor(string sss);
	bool isRight ();
	void printfloor();
	void findrod(int &x, int &y);
	void printFloor ();
	void findP (int &x, int &y);
	void findW (int &x, int &y);
	
	~Floor();

	};




#endif /* FUNCTIONS_HPP_ */
