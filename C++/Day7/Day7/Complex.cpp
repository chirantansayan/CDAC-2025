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
Complex Complex::add(Complex& x)
{
	return Complex(this->real+x.real, this->img+x.img); 
}
void Complex::display()
{
	cout<<real<<"+i "<<img<<endl;
}

