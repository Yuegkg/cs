#include<iostream>
#include "Wombat.hpp"
#include<cmath>

using namespace std;



/****************************************
 *    Wombat::move()			*
 * this function will move the swan 	*
 * once in the board,in each move this  *
 * function will either change the 	*
 * position of the swan of the direction* 
 * of the swan				*
 * *************************************/

void Wombat::move (Floor *floor)
{
   
if(dir==0)
	{
	if(floor->array[x][y-1]=='#'||floor->array[x][y-1]=='D')
		{
		dir++;
		dir=dir%3;
		}
	else
		{
		y--;
		}
	}

if(dir==2)
        {
        if(floor->array[x][y+1]=='#'||floor->array[x][y+1]=='D')
                {
                dir++;
                dir=dir%3;
                }
        else
                {
                y++;
                }
        }

if(dir==1)
        {
        if(floor->array[x-1][y]=='#'||floor->array[x-1][y]=='D')
                {
                dir++;
                dir=dir%3;
                }
        else
                {
               x--;
                }
        }

if(dir==3)
        {
        if(floor->array[x+1][y]=='#'||floor->array[x+1][y]=='D')
                {
                dir++;
                dir=dir%3;
                }
        else
                {
                x++;
                }
        }

	}
