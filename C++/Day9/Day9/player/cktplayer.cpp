#include<iostream>
#include"cktplayer.h"
using namespace std;

cktplayer::cktplayer():runs(0)
{
	cout<<"ckt Default ctor"<<endl;
}

cktplayer::cktplayer(int runs):runs(runs)
{
	cout<<"ckt Param ctor"<<endl;
}
void cktplayer::accept()
{
	Player::accept();
	cin>>runs;
}
void cktplayer::display()
{
	Player::display();
	cout<<runs<<endl;
}
cktplayer::~cktplayer()
{
	cout<<"ckt Dtor called "<<endl;
}
