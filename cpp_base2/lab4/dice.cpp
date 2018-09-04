#include<iostream>

#include"random.h"

using namespace std;
Random::Random()
{
	srand(static_cast<unsigned>(time(0)));     
}
unsigned Random::get_random_num(int top) const
{
	return std::rand() % top;    //使用rand函数随机出一个0-top的数字
}
