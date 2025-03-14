#include<iostream>
#include "Complex.h"
using namespace std;

int Complex::ctr = 0;
Complex::Complex():real(0),img(0)
{
	ctr++;
}
Complex::Complex(int real,int img):real(real),img(img)
{
	ctr++;
}
Complex Complex::operator+(Complex& x)
{
	return Complex(this->real+x.real, this->img+x.img); 
}
Complex Complex::operator-(Complex& x)
{
	return Complex(this->real-x.real, this->img-x.img); 
}
Complex Complex::operator*(Complex& x)
{
	return Complex(this->real*x.real, this->img*x.img); 
}
void Complex::display()
{
	if(img<0)
	{
	cout<<real<<" "<<img<<"i"<<endl;
	}
	else
	{
	cout<<real<<" +"<<img<<"i"<<endl;
	}
}

