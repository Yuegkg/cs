#include<iostream>
#include<ctype.h>
#include "Hero.hpp"
#include "Actor.hpp"
#include "Floor.hpp"

using namespace std;



/****************************************
 * 	newHero()			*
 * this function will reset the hero 	*
 * when go to a new floor		*
 * *************************************/


void Hero::newHero(int xx, int yy)

{

this->x=xx;
this->y=yy;

hx=xx;
hy=yy;

}


/****************************************
 * 	back()				*
 * this function will send hero to 	*
 * starting position will meet a swan	*
 * *************************************/


void Hero::back()

{

x=hx;
y=hy;

}	

/****************************************
 * 	move()				*
 * this function will change the 	*
 * position of the hero in the maze 	*
 * based on the user's input		*
 * *************************************/


void Hero::move(Floor *floor)

{

char input;

/*accept command*/

cout<<"input you next move : ";
cin>>input;
input=tolower(input);
cout<<endl;

/*if move up*/

if(input=='w')
	{
	
	/*if not hit rhe wall*/

	if(floor->array[x-1][y]=='#');
	else
	
		{
		
		x--;

		/*if meet a door*/

		if(floor->array[x][y]=='D')
			{
			if(key>0)
				{
				key--;
				floor->array[x][y]=' ';
				}
			else
				{
				cout<<"you can't pass the door\n";
				x++;
				}
			}

	
			
		/*if meet a key*/	

		else if(floor->array[x][y]=='K')
                        {

			cin.get();
                        cout<<"do you want to pick the key? enter 'p' to pick the key  :";
                        input=cin.get();
			cout<<endl;

                        if(tolower(input)=='p')
                                {
                                key++;
				floor->array[x][y]=' ';
                                }
                        if(key>2)
                                {
                                key=2;
                                }
                        }
		
		/*if exit*/
	
		else if(floor->array[x][y]=='X')
			{
			notEscape=false;
			}
		}
	}



/*if move down*/

else if(input=='s')
	{
	
	/*if not hit rhe wall*/
	
	if(floor->array[x+1][y]=='#');
	else
		{
		
		x++;

		/*if meet a door*/

		if(floor->array[x][y]=='D')
			{
			if(key>0)
				{
		//		x++;
				key--;
				floor->array[x][y]=' ';
				}
			else
				{
				cout<<"you can't pass the door\n";
				x--;
				}
			}

		
		/*if meet a key*/	

		else if(floor->array[x][y]=='K')
                        {

			cin.get();
                        cout<<"do you want to pick the key? enter 'p' to pick the key  :";
                        input=cin.get();
			cout<<endl;
	
                        if(tolower(input)=='p')
                                {
                                key++;
				floor->array[x][y]=' ';
                                }
                        if(key>2)
                                {
                                key=2;
                                }
                        }
	

		/*if exit*/
		
		else if(floor->array[x][y]=='X')
			{
			notEscape=false;
			}
	
}
	

	}


/*if move left*/

else if(input=='a')
	{
	
	/*if not hit rhe wall*/

	if(floor->array[x][y-1]=='#');
	else
		{
		y--;
		/*if meet a door*/

		if(floor->array[x][y]=='D')
			{
			if(key>0)
				{

				key--;
				floor->array[x][y]=' ';
				}
			else
				{
				cout<<"you can't pass the door\n";
				y++;
				}
			}

			
		/*if meet a key*/	

		else if(floor->array[x][y]=='K')
                        {

//                        y--;
			cin.get();
                        cout<<"do you want to pick the key? enter 'p' to pick the key  :";
		//	cin.get();
                        input=cin.get();
			cout<<endl;

                        if(tolower(input)=='p')
                                {
                                key++;
				floor->array[x][y]=' ';
                                }
                        if(key>2)
                                {
                                key=2;
                                }
                        }

		/*if exit*/
		
		else if(floor->array[x][y]=='X')
			{
			notEscape=false;
			}
		}
	}




/*if move right*/

else if(input=='d')
	{
	
	/*if not hit rhe wall*/

	if(floor->array[x][y+1]=='#');
	else;
		{
		y++;

		/*if meet a door*/

		if(floor->array[x][y+1]=='D')
			{
			if(key>0)
				{
				key--;
				floor->array[x][y]=' ';
				}
			else
				{
				cout<<"you can't pass the door\n";
				y--;
				}
			}

		/*if meet a key*/	

		else if(floor->array[x][y]=='K')
                        {

                        y++;
			cin.get();
                        cout<<"do you want to pick the key? enter 'p' to pick the key  :";
			
                        input=cin.get();
			cout<<endl;

                        if(tolower(input)=='p')
                                {
                                key++;
				floor->array[x][y]=' ';
                                }
                        if(key>2)
                                {
                                key=2;
                                }
                        }
	
		/*if meet exit*/	
	
		else if(floor->array[x][y]=='X')
			{
			notEscape=false;
			}

		}

	}

else 
	cout<<"wrong cpmmand\n";

cin.get();
cout<<"do you want to quit the game? yes enter 'q' : ";
input=cin.get();
cout<<endl;
if(tolower(input)=='q')
	{
	notQuit=false;
	}

//cout<<"you moved\n";
}
