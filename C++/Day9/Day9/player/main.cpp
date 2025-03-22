#include"cktplayer.h"
int main()
{
	cktplayer c1,c2(1000);
	c1.display();
	cktplayer c3;
	c3.accept();
	c3.display();
	return 0;
}
