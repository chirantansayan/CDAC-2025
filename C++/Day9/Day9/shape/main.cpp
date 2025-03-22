#include<iostream>
#include"rect.h"
#include"circle.h"
using namespace std;

int main()
{
	shape *s = nullptr;
    	rect r;
	circle c;
	
	s = &r; 
	s->Accept();
        s->CalcArea();
	s->CalcPeri();
	
	s = &c; 
	s->Accept();
	s->CalcArea();
	s->CalcPeri();
	
	return 0;
}
