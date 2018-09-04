#ifndef DICE__H__
#define DICE__H__
using namespace std;
#include <cstdlib>
#include <ctime>

class Random
{
public:
	Random(); //先使用srand函数初始化
	unsigned get_random_num(int top) const;//使用rand函数随机出一个0-top的数字
private:
	



};
#endif
