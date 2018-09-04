#include<iostream>
#include "Floor.hpp"

using namespace std;

#ifndef ACTOR_HPP_
#define ACTOR_HPP_


/****************************************
 * 					*
 * Class Actor				*
 * parant class for Swan and Hero       *
 *					*
 ***************************************/



class Actor
{

public:

int x;
int y;

Actor (int x,int y);
virtual void move (Floor *floor)=0;
};


#endif /*ACTOR_HPP_*/
	
	
