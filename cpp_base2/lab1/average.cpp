#include <iostream>
#include "average.hpp"
#include <array>
using namespace std;

double avg(double array[], int l)
{
	double sum;
	sum = 0;
	double average;
	for (int i = 0; i <= l; i++)
	{
		sum = sum + array[i];
	}
	average = sum/l;
	return average;
}


