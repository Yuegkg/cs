#ifndef GAME_HPP_
#define GAME_HPP_

class game{
	private:
		int size;
		char **bord;
	
	public:
		game(int a);
		void getbord();
		bool empty();
		bool value(int x, int y);
		void fillbord(int x, int y, int c);
		bool win();
		bool ai(int b);
	};
#endif
