#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		static int ctr;
		Complex();
		Complex(int,int);
		Complex add(Complex&);
		void display();
};
