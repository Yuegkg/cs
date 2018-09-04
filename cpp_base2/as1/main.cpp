/************************************************************
 * * Projram filename:as1
 * * Author: Yue Fan
 * * Date: 7/5/2017
 * * Description: This projram is a game which is called tic-tac-tic
 * * Input: row and cols
 * * output: win or not
 * **********************************************************/
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include"game.hpp"

using namespace std;

int main()
	{
	system("clear");

	bool gameon;
	char agin;
	int player;
	char cq;

	do{
		cout << "Do you want to play with ai or player? 1 for ai, 2 for player!\n";
		cin >> player;
		int a=3;
		int x,y;
		int c=0;
		
		game game(a);
		game.getbord();
		
		if(player == 2)
			{
			while(game.empty()&&! game.win())
				{
				cout <<" What is the rows:";
				cin >> x;
				cout << endl;
			
				cout <<" What is the cols:";
				cin >> y;
				cout << endl;
		
				if (game.value(x,y))
					{
					game.fillbord(x,y,c);
					c++;
					}
				game.getbord();
				if(!game.win())
					{
					if(!game.empty())
						{
						cout << "draw\n";
						}
					}
				}
			gameon = false;
			cout << "Do you want to try agin? yes for y" << endl;
			cin >> agin;
			if (agin == 'y')
				{
				gameon = true;
				}
		else
			{
			cout<<"do you want play first or second? first enter f\n";
			cin >> cq;
			
			while(game.empty()&&!game.win())
				{
				
				//use al to play the game with user
				if(cq!='f')
					{
					if(game.ai(a))
						{
						a++;
						game.getbord();
						}
					}
				cout<<"What is your  row :";
				cin>>x;
				cout<<endl;
				cout<<"What is your  cols :";
				cin>>y;
				cout << endl;

				while(!game.value(x,y))
					{
					cout<< "What is your  row :";
					cin>>x;
					cout<<endl;
					cout<<"What is your  col :";
					cin>>y;
					cout<<endl;
					}
				game.fillbord(x,y,a);
				a++;
				game.getbord();
	
				if(!game.win())
					{
					if(!game.empty())
						{
						cout<<"draw\n";
						}
					}	
	
				if(cq=='f')
					{
					if(game.ai(a))
						{
						a++;
						game.getbord();
						}
					}
				}
			gameon = false;
			cout << "do you want to one more time? yse for y"<< endl;
			cin >> again;
			if (again == 'y');
				{
				gameon = ture;
				}
			}
		while(gameon);
		return 0;
	}
