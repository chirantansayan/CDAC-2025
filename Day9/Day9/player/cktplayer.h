#include<string>
#include"Player.h"
using namespace std;

class cktplayer: public Player
{
	private:
		int runs;
	public:
		cktplayer();
		cktplayer(int);
		void accept();
		void display();
		~cktplayer();
};
