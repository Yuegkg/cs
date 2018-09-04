/***************************************************************************************
**Program: homework2.cpp
**Author: Yue Fan
**Date: 10/9/2016
**Description: computing the check digit.
**Input: 9-digit or 12-digit integer
**Output:ISBN
***************************************************************************************/
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int number;			//int fuction
	int f1;
	int f2;
	int f3;
	int f4;
	int f5;
	int f6;
	int f7;
	int f8;
	int f9;
	int f10;
	int f11;
	int f12;
	int b1;
	int x;				//check number
	cout << "Please enter 9-digit or 12-digit number :";		//input
	cin >> number;
	cout << endl;
	if ( number <= 1000000000 )					// when 9-digit number
		{
		f1 = number/100000000;					// get each digit number
		f2 = number%100000000/10000000;
		f3 = number%100000000%10000000/1000000;
		f4 = number%100000000%10000000%1000000/100000;
		f5 = number%100000000%10000000%1000000%100000/10000;
		f6 = number%100000000%10000000%1000000%100000%10000/1000;
		f7 = number%100000000%10000000%1000000%100000%10000%1000/100;
		f8 = number%100000000%10000000%1000000%100000%10000%1000%100/10;
		f9 = number%100000000%10000000%1000000%100000%10000%1000%100%10/1;
		
		x = (2*f9 + 3*f8 + 4*f7 + 5*f6 + 6*f5 + 7*f4 + 8*f3 + 9*f2 +10*f1)%11;  	// use the inf to calculate the check number
		
		cout <<"The check digit number is:";						//ot put the number
		cout << x;
		cout << endl;	
		cout << "The 10-digit ISBN number:";
		cout << f1;
		cout << "-";
		cout << f2;
		cout << f3;
		cout << f4;
		cout << "-";
		cout << f5;
		cout << f6;
		cout << f7;
		cout << f8;
		cout << f9;
		cout << "-";
		cout << x; 
		cout << endl;
		}
	
	else											// when 12-digit number	
		{
		b1 = number/100000000000;							//sub each digit number
		f2 = number%100000000000/10000000000;
		f3 = number%100000000000%10000000000/1000000000;
		f4 = number%100000000000%10000000000%1000000000/100000000;
		f5 = number%100000000000%10000000000%1000000000%100000000/10000000;
                f6 = number%100000000000%10000000000%1000000000%100000000%10000000/1000000;
                f7 = number%100000000000%10000000000%1000000000%100000000%10000000%1000000/100000;
                f8 = number%100000000000%10000000000%1000000000%100000000%10000000%1000000%100000/10000;
                f9 = number%100000000000%10000000000%1000000000%100000000%10000000%1000000%100000%10000/1000;
                f10 = number%100000000000%10000000000%1000000000%100000000%10000000%1000000%100000%10000%1000/100;
                f11 = number%100000000000%10000000000%1000000000%100000000%10000000%1000000%100000%10000%1000%100/10;
                f12 = number%100000000000%10000000000%1000000000%100000000%10000000%1000000%100000%10000%1000%100%10/1;
	
		x = (3*f12 + f11 + 3*f10 + f9 +3*f8 + f7 + 3*f6 + f5 + 3*f4 + f3 + 3*f2 + b1)%10;		// use inf cal 12-digit check number

		cout << "The check digit number is:";								//out put
		cout << x;
		cout << endl;
		cout << "The 13-digit ISBN number:";
		cout << b1;
		cout << f2;
		cout << f3;
		cout << "-";
		cout << f4;
		cout << "-";
		cout << f5;
		cout << f6;
		cout << f7;
		cout << f8;
		cout << "-";
		cout << f9;
		cout << f10;
		cout << f11;
		cout << f12;
		cout << "-";
		cout << x;
		cout << endl;	
		}

	return 0;

}
