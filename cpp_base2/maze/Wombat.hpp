#include<iostream>
#include "Actor.hpp"
#include "Floor.hpp"

using namespace std;

#ifndef WOMBAT_HPP_
#define WOMBAT_HPP_


class Wombat : public Actor

{

public:

char W;
Wombat *next;
int dir;

Wombat (int xx, int yy) : Actor (xx, yy)

{
x=xx;
y=yy;

W='W';

next=NULL;

dir=2;

}

void move(Floor *floor);

};



#endif	/*WOMBAT_HPP_*/
