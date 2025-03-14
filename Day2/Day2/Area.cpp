#include<iostream>
using namespace std;
static float pi=3.141;
float circle(int r)
{
	return pi*r*r;
}
int rectangle(int l, int b)
{
	return l*b;
}
int square(int s)
{
	return s*s;
}
int main()
{
	int r=0,l=0,b=0,s=0;
	cout<<"Enter radius of the circle"<<endl;
	cin>>r;
	cout<<"Area of circle ="<<circle(r)<<endl;
	cout<<"Enter length and breadth of rectangle"<<endl;
	cin>>l>>b;
	cout<<"Area of rectangle="<<rectangle(l,b)<<endl;
	cout<<"Enter side of square"<<endl;
	cin>>s;
	cout<<"Area of square="<<square(s)<<endl;
	return 0;
}

