/********************************************
** Program Filename: me.h
** Author: Yue Fan
** Date:7/25
** Description: polimophism
** Input: dic
** Output: attack defense point
******************************************/

#include<iostream>

using namespace std;

class Me : public Hero {
private:

public:
	Me() : Hero() {
		armor = 3;
		point = 8;
	}
	int attack() {
		int a = 0;
		a = dic_roll(6, 2);
		if (a = 12) {
			cout << "The target has looked her in the eyes and is turned to stone!" << endl;
			a = 1000;
		}
		else {
			cout << "Medusa attack " << a << " points." << endl;
		}

		return a;
	}
	void defense(int a) {
		int d;

		d = dic_roll(6, 1);
		if (a < (armor + d)) {
			cout << "Medusa defend the attack." << endl;
		}
		else {
			point = point - a + armor + d;
			cout << "Meduse lose " << a - armor - d << " points." << endl;
		}
		cout << point << "points remains." << endl;

		if (point < 0) {

			point = 0;

		}
	};

};
