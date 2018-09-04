#include <iostream>
#include "average.cpp"
#include "summation.cpp"
#include <array>
using namespace std;

int main()
{
	int num;
	cout << "How many numbers do you want to enter?" << endl;
	cin >> num;
	double array[num];
	for (int i = 0; i < num; i++)
	{
		int out = i + 1;
		double element;
		cout << "Enter the " << out << " number" << endl;
		cin >> element;
		array[i] = element;
	}
	double average = avg(array, num);
	double summation = sum(array, num);
	cout << "The average is " << average << endl;
	cout << "The sum is " << summation << endl;
}



