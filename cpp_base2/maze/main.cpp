/************************************************
 *Program file name: maze			*	
 *Author: Mingyu Zhang				*
 *Data: 0808/2016				*
 *Describe: it will play a game called maze	*
 ***********************************************/


#include<iostream>
#include "Maze.hpp"

using namespace std;

int main(int argc, char *argv[])
{
int i;
char e;
e=argv[1][0];
i=e-'0';
Maze good(i);
good.escape();

return 0;
}
