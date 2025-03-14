#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the character to check case :"<<endl;
	cin>>ch;
	int check = ch;
	if(check >= 65 && check <= 90)
	{
		cout<<"Character is Capital letter"<<endl;
	}
	else if(check >90 && check <=122)
	{
		cout<<"Character is Small letter"<<endl;
	}
	else
	{
		cout<<"Not a character!"<<endl;
	}
	return 0;
}
