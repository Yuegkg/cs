/****************************************************
** Program Filename: hero.h
** Author: YueFan
** Date:7/25
** Description:creat dic and make hero class
** Input:
** Output: dic
*****************************************************/


#include<iostream>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h>       

using namespace std;

int dic_roll(int tp, int ti) {

 	int outcomes = 0;
	
	if (tp == 6) {
		
		for (int i = 0; i < ti; i++) {
			
			outcomes = outcomes + rand() % 6 + 1;
		}
		
	}
	else if (tp = 2) {

	
		for (int i = 0; i < ti; i++) {

			outcomes = outcomes + rand() % 2 +1;
		}
	}
	else {

		
		for (int i = 0; i < ti; i++) {
			
			outcomes = outcomes + rand() % 12 + 1;
		}
	}
	return outcomes;
}

class Hero {
protected:
	int armor;
	int point;
public:
	Hero() {
		armor = 0;
		point = 0;
	}
	virtual int attack() = 0;
	virtual void defense(int a) = 0;
	int pointt() {
		return point;
	}
};
