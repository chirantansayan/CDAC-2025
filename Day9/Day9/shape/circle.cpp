#include<iostream>
#include"circle.h"
using namespace std;

void circle::Accept()
{
	cout<<"Enter the radius : ";
	cin>>radius;
}
void circle::CalcArea()
{
	float area = 0;
	area = 3.14 * radius * radius;
	cout<<"The area of circle is = "<<area<<endl;
	cout<<endl;
}
void circle::CalcPeri()
{
	float peri = 0;
	peri = 2 * 3.14 * radius;
	cout<<"The perimeter of circle is = "<<peri<<endl;
	cout<<endl;
}
