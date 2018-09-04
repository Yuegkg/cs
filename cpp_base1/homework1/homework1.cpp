/*********************************************************************************
**Program: homework1.cpp
**Author: Yue Fan
**Date: 10/2/2016
**Input: binary
**Output:Max,Mix values and decimal
*********************************************************************************/
#include<iostream>
#include<climits>
#include<cmath>
int main()
{
	using namespace std;
	int signed_max= INT_MAX;	//use climits to fund the signed_int max value
	int signed_min= INT_MIN;	//use climits to fund the signed_int min value
	int unsigned_max= UINT_MAX;	//use climits to fund the unsigned_int max value
	cout << "Signed max value is: " << signed_max << endl; //output the valus
	cout << "Signed min value is: " << signed_min << endl;
	cout << "Unsugned max valus is: " << unsigned_max << endl;
	int e;			//input number
	int lag_signed;
	int sm_signed;
	int lag_unsigned;
	cout << "type a number bits " << endl;		// type number inf
	cin >> e;
	lag_signed = pow(2,e-1)-1;			//catculate the max signed
	sm_signed = -pow(2,e-1);			//catculate the min signed
	lag_unsigned = pow(2,e)-1;			//catculate the max unsigned
	cout << "Largest signed is: " << lag_signed << endl;	//output
	cout << "Least signed is: " << sm_signed << endl;
	cout << "Largest unsigned is: " << lag_unsigned << endl;
	cout << "Minimum unsigned is: 0" << endl;		//Min unsigned values is 0
	int num;	//input number
	int a;		//A number which is thousand seat
	int b;		//It is hundred seat
	int c;		//It is decimal seat
	int d;		//It is units digit
	cout << "Input a 4 bits number(e.g.0001)" << endl;	//output
	cin >> num;			//give num a number
	a=num/1000*8;			//calculate the thousand seat number
	b=num%1000/100*4;		//hundred seat number
	c=num%1000%100/10*2;		//decimal sat number
	d=num%1000%100%10/1;		//units seat number
	num=a+b+c+d;			//calculate the total
	cout << "The decimal number is " << num <<endl; 	//output decimal number
	return 0;
}
