#include<iostream>
#include "Actor.hpp"
#include "Floor.hpp"

using namespace std;

#ifndef HERO_HPP_
#define HERO_HPP_



class Hero : public Actor
{

public:

int hx;
int hy;
char hero;
int apple;
int key;
bool notEscape;
bool notQuit;

Hero (int xx, int yy) : Actor (xx,yy){

x=xx;
y=yy;

hx=xx;
hy=yy;

hero='P';
apple=0;

key=0;

notEscape=true;
notQuit=true;	

}



void newHero(int x, int y);
void back () ;
void move (Floor *floor);

};



#endif /*HERO_HPP_*/
