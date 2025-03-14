#include<iostream>
#include"rect.h"
using namespace std;

void rect::Accept()
{
	cout<<"Enter the length : ";
	cin>>length;
	cout<<"Enter the breadth : ";
	cin>>breadth;
}
void rect::CalcArea()
{
	int area = 0;
	area = length * breadth;
	cout<<"The area of rectangle is = "<<area<<endl;
	cout<<endl;
}
void rect::CalcPeri()
{
	int peri = 0;
	peri = 2 * (length + breadth);
	cout<<"The perimeter of rectangle is = "<<peri<<endl;
	cout<<endl;
}
