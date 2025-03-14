#include<iostream>
#include<string>
#include"MobilePhone.h"
using namespace std;

void MobilePhone::Accept()
{
	cout<<"Enter serial number : ";
	cin>>serialNo;
	cin.get();
	cout<<"Enter model number : ";
	getline(cin, modelNo);
	cout<<"Enter brand name : ";
	getline(cin, brandName);
	cout<<"Enter price : ";
	cin>>price;
	cout<<endl;
}
void MobilePhone::Display()
{
	cout<<"Serial number = "<<serialNo<<endl;
	cout<<"Model number = "<<modelNo<<endl;
	cout<<"Brand name = "<<brandName<<endl;
	cout<<"Price = "<<price<<endl;
	cout<<endl;
}
void MobilePhone::sort(MobilePhone *p, int ctr)
{
      for(int j=0; j<ctr; j++)
	{
		for(int k=j+1; k<ctr; k++)
		{
			if(p[j].price > p[k].price)
			{
				MobilePhone temp = p[j];
				p[j] = p[k];
				p[k] = temp;
			}
		}
	}
}
