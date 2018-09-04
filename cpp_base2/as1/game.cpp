#include<iostream>
#include"game.hpp"

using namespace std;

game::game(int a)
	{
	
	size = a;
	bord = new char*[size];
	for (int i=0; i<size; i++)
		{
		bord[i]=new char[size];
		}
	for (int i=0; i<size; i++)
		{
		for(int j=0; j<size; j++)
			{
			bord[i][j]='*';
			}
		}
	}

void game::getbord()
	{
	for(int i=0;i<3;i++)
		{
		for(int j=0;j<3;j++)
			{		
			cout << bord[i][j];
			}
		cout << endl;
		}
	}




bool game::empty()
	{
	for(int i=0; i<size; i++)
		{
		for(int j=0; j<size; j++)
			{
			if(bord[i][j]=='*')
				{
				return true;
				}
			}
		}
	return false;
	}

bool game::value(int x, int y)
	{
	if (x>0 && x<4)
		{
		if (bord[x-1][y-1]=='*')
			{
			return true;
			}
		}
	return false;
	}
void game::fillbord(int x, int y, int c)
	{
	x--;
	y--;
	if(c%2 == 0)
		{
		bord[x][y]='X';//first player useing X.
		}
	else if(c%2 == 1)
		{
		bord[x][y]='O';
		}
	}

bool game::win()
	{
	
	bool tem;
	for(int i=0;i<size; i++)
		{
		tem =true;
		for(int k=0; k<(size-1);k++)
			{
			if (bord[i][k]!=bord[i][k+1])
				{
				tem = false;
				}
			}
		if(tem)
			{
			if(bord[i][0]!='*')
				{
				cout << "winner is : " << bord[i][0] << endl;
				return true;
				}
			}
		}
	
	for(int i=0; i<(size-1);i++)
		{
		
		if(bord[i][i]!=bord[i+1][i+1])
			{
			tem = false;
			}
		}
	if (tem)
		{
		if(bord[0][0]!='*')
			{
			cout << "winner is : " << bord[0][0] << endl;
			return true;
			}
		}
	
	tem =true;
	for(int i=0;i < size; i++)
		{
		tem=true;
		for(int k=0; k<(size-1);k++)
			{
			if(bord[k][i]!=bord[k+1][k])
				{
				tem=false;
				}
			}
		if(tem)
			{
			if(bord[0][i]!='*')
				{
				cout << "winner is : " << bord[0][i] << endl;
				return true;
				}
			}
		}

	tem = true;
	for (int k=0; k<(size-1); k++)
		{
		if(bord[k][size-2-k]!=bord[k+1][size-2-k])
			{
			tem = false;
			}
		}
		if(tem)
			{
			if (bord[0][size-1]!='*')
				{
				cout << "winner is :" << bord[0][size-1] << endl;
					return true;
				}
			}
		return false;
	}
	
bool game::ai(int b)
	{
	for(int i =0; i<size; i++)
		{
		for(int j=0; j<size; j++)
			{
			if(bord[i][j]=='*')
				{
				i++;
				j++;
				fillbord(i,j,b);
				return true;
				}
			}
		}
	return false;
	}




















