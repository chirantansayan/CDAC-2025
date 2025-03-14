#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int size,i;
	string str;
	cout<<"Enter size :"<<endl;
	cin>>size;
	char s[size];
	cout<<"Enter the sequence of characters "<<endl; 
	for(i=0;i<size;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<size;i++)
	{
		str+= s[i];
	}
	cout<<"Converted char array to String : "<<str<<endl;
	return 0;
}
