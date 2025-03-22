#include<iostream>
#include "Complex.h"
using namespace std;
int main()
{
	int real=0,img=0;
	cout<<"Enter real and imaginary for first :"<<endl;
	cin>>real>>img;
	Complex c1(real,img);
	cout<<"Enter real and imaginary for first :"<<endl;
	cin>>real>>img;
	Complex c2(real,img);
	//calculation
	Complex c3;
	c3 = c1+c2;
	c3.display();
	c3=c1-c2;
	c3.display();
	c3=c1*c2;
	c3.display();
	cout<<"The number of objects is : "<<c3.ctr<<endl;
	return 0;
}
