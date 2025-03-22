#include<iostream>
#include<string>
#include"Player.h"
using namespace std;

Player::Player():name(""),age(0)
{
	cout<<"Default ctor :"<<endl;
}

Player::Player(string name, int age):name(name),age(age)
{
	cout<<"Parametrized ctor :"<<endl;
}

void Player::accept()
{
	cout<<"Enter name and age of player: "<<endl;
	getline(cin, name);
	cin>>age;
}
void Player::display()
{
	cout<<"Name of Player: "<<name<<endl;
	cout<<"Age of Player: "<<age<<endl;
}
Player::~Player()
{
	cout<<"Dtor Called"<<endl;
}

