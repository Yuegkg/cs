/*******************************************************************
 * Author: Yue Fan
 * data: 11/6/201
 * des: revers and determine palindrome
 * input: string
 * output: revers or it is palindrome or not
 * ****************************************************************/

#include <iostream>
#include <string>

using namespace std;

//function that get string
void get_string(string &s)
	{
	cout << " Enter your string: " << endl;
	getline(cin,s);
//	cin >> s;
	}

//function revers
void revers_string(string &s, string &sn)
	{
	for(int i = s.size()-1; i >= 0; --i)
		sn += s[i];//show the char from last to front
	cout << sn <<endl;
	}

//function thath check palindrome
void determine_palindrome (string &s,string &sn)
	{
		
		if ( sn == s)//sn is revers, if it same to old s, it is palindrome
			cout << "This string is palindrome." << endl;
		else 
			cout << "This strin is not palindrome." <<endl;
			
	}

int main()
	{
		int i;
		string s, sn;
		get_string(s);
		cout << "Do you want to reverse a string, check if it is palindrome, or quit?" << endl;//choice which part you want
		cout << "(Press 1 to reserve, 2 for palindrome, and anything else to quit)"<<endl;
		cin >> i;
		if( i == 1 )  //revers
		{
			revers_string(s,sn);
		}
		else if( i == 2)//check palindrome
		{	
			revers_string(s,sn);
			determine_palindrome(s,sn);
		}
		else 
			return 0;
	return 0;
	}
