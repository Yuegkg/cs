#include<iostream>
#include "Maze.hpp"

using namespace std;


/********************************
 * Maze()			*
 * contstructor of class maze	*
 * *****************************/


Maze::Maze(int ww)
{

/*the file's name*/

name[0]="floor_1.txt";
name[1]="floor_2.txt";
name[2]="floor_3.txt";
name[3]="floor_4.txt";
name[4]="floor_5.txt";

maze=4;
step=0;

/*find the current floor based on commend*/

where=(maze-ww)+1;

/*vaild the command*/

if(where<0)
	where=0;

/*set hero and swan*/

floor=new Floor();
floor->findP(px,py);
floor->findW(sx,sy);

player=new Hero(px,py);
wombat=new Wombat (sx,sy);

}


/****************************************
 *  pprint()				*
 *  this function will print the maze 	*
 *  where the player currently in	*
 *  ************************************/


void Maze::pprint()
{

/*create a temp array to hold the current maze*/

char **temp=new char*[floor->n];
for(int i=0;i<floor->n;i++)
	{
	temp[i]=new char[floor->m];
	}

/*cope the information from floor pointer*/

for(int i=0;i<floor->n;i++)
	for(int p=0;p<floor->m;p++)
		temp[i][p]=floor->array[i][p];

/*put player and swan in the maze*/

temp[player->x][player->y]='p';
Wombat *ww;
ww=wombat;
while(ww)
	{
	temp[ww->x][ww->y]='W';
	ww=ww->next;
	}
/*print the current maze*/

for(int	i=0;i<floor->n;i++)
	{
	for(int p=0;p<floor->m;p++)
		{
		cout<<temp[i][p];
		}
	cout<<endl;
	}

/*free the memeory*/

for(int i=0;i<floor->n;i++)
	delete [] temp[i];
delete [] temp;

}



/****************************************
 * 	escape()			*
 *this function will play the game	*
 ***************************************/


void Maze::escape()
{

char cc;
cout<<"the advanture is started\n";
//cout<<"this is your current position\n";
//pprint();

/*use loop to play the game*/

while(player->notEscape&&player->notQuit)
{
cout<<"this is your current position\n";
pprint();


/*player move*/

player->move(floor);

/*Wombat move*/

Wombat *ww = new Wombat(sx,sy);
while(ww!=NULL)
	{
	
	/*check if Hero and wombat is adjacent*/
	
	if(ww->x==player->x)
		if(player->y==ww->y)

		/*sent Hero to starting position*/	

			player->back();

	ww->move(floor);
	ww=ww->next;
	}

/*create a new swan in each step*/

if(step==30)
	{
	cout<<"There have a wombat\n";
	Wombat *ws;
	ws=wombat;
	while(ws!=NULL)
		ws=ws->next;
	ws=new Wombat(sx,sy);
	step=0;
	}		
	
/*if meet a ladder*/
	
if(floor->array[player->x][player->y]=='L')
	{

	cout<<"ladder!want to climb? if yes please enter 'u'";
	cin.get();
	cc=cin.get();
	cout<<endl;

	if(cc=='u')
		{
		where++;
		floor->newFloor(name[where]);
		floor->findP(px,py);
		floor->findW(px,py);
		player->newHero(px,py);
		wombat=NULL;
		wombat=new Wombat(sx,sy);
		floor->array[player->x][player->y]=' ' ;
		}
	}

/*each loop step add one*/

step++;
}

if(player->notEscape)
	{
	cout<<"you quit the game\n";
	}
else
	cout<<"you escape\n";	
}
		
