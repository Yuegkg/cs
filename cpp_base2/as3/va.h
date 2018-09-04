/****************************************************************
 * Program Filename: Va.h
 * Author: Yue Fan
 * Date: 7/25/2017
 * Description: creat a class for vampire
 * Input:dic
 * Output:attact defense point
 * ***********************************************************/

#include<iostream>
#include"hero.h"

using namespace std;

class Va : public Hero {
private:

public:
	Va() : Hero() {
		armor = 3;
		point = 8;
	}
	int attack() {
		int a = 0;
		a = dic_roll(12, 1);
		cout << "Vampire attack " << a << " points." << endl;
		return a;
	}
	void defense(int a) {
		int d;
		d = dic_roll(2, 1);
		if (d == 1) {
			
			cout << "Vampires charms the opponent!" << endl;

		}
		else {
			d = dic_roll(6, 1);
			if (a < (armor + d)) {
				cout << "Vampire defend the attack." << endl;
			}
			else {
				point = point - a + armor + d;
				cout << "Vampire lose " << a - armor - d << " points." << endl;
			}
		}

		cout << point << "points remains." << endl;

		if (point < 0) {
		
			point = 0;

		}

	}
};
