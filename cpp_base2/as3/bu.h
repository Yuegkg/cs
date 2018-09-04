/*******************************************
 *
** Program Filename: Bu.h
** Author: Yue Fan
** Date:7/25
** Description: polimophism
** Input: dic
** Output: attack defense point
*******************************************/

#include<iostream>
using namespace std;


class Bu : public Hero {
private:

public:
	Bu() : Hero() {
		armor = 0;
		point = 12;
	}
	int attack() {
		int a = 0;
		a = dic_roll(6, 2);
		cout << "Bubba attack " << a << " points." << endl;
		return a;
	}
	void defense(int a) {
		int d;
		d = dic_roll(6, 2);
		if (a < (armor + d)) {
			cout << "Bubba defend the attack." << endl;
		}
		else {
			point = point - a + armor + d;
			cout << "Bubba lose " << a - armor - d << " points." << endl;
		}

		cout << point << "points remains." << endl;

		if (point < 0) {

			point = 0;
			}
	}
	};
