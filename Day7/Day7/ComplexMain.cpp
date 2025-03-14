#include<iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex c1(10,10),c2(20,20);
	Complex c3;
	c3 = c1.add(c2);
	c3.display();
	cout<<"The number of objects is : "<<c3.ctr<<endl;
	return 0;
}
