#include<iostream>
#include<string>
#include "Floor.hpp"
#include "Hero.hpp"
#include "Wombat.hpp"

using namespace std;

#ifndef MAZE_HPP_
#define MAZE_HPP_


class Maze
{

	private:
	string name[5];
	Floor *floor;
	Hero *player;
	int px;
	int py;
	Wombat *wombat;
	int sx;
	int sy;
	int step;
	int maze;
	int where;

	public:

	Maze(int ww);
	void pprint();
	void escape( );

};


#endif /*MAZE.HPP*/
