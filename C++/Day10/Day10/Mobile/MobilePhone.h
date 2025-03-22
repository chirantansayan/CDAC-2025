#include<iostream>
#include<string>
using namespace std;

class MobilePhone
{
	int serialNo;
	string modelNo;
	string brandName;
	float price;

	public:
	void Accept();
	void Display();
	void sort(MobilePhone *, int);
};
