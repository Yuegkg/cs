#include <iostream>
#include "summation.hpp"
#include <array>
using namespace std;

double sum(double array[], int l)
{
	double tot = 0;
	for (int i = 0; i <= l; i++)
	{
		tot = tot + array[i];
	}
	return tot;
}



