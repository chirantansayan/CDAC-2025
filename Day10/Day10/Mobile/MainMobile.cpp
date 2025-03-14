#include<iostream>
#include<fstream>
#include"MobilePhone.h"
using namespace std;

int main()
{
	MobilePhone mobile;
	cout<<"Enter the mobile phones :"<<endl;

	char ch;
	ofstream fout("Mobile.dat", ios::app|ios::binary);
	do
	{
		mobile.Accept();
		fout.write((char*)&mobile, sizeof(MobilePhone));
		cout<<"Do you want to continue (y/n): ";
		cin>>ch;
	}while(ch != 'n');
	fout.close();

	ifstream fin("Mobile.dat", ios::binary);
	int ctr = 0;
	cout<<"Data in unsorted form :"<<endl;
	while(fin.read((char*)&mobile, sizeof(MobilePhone)))
	{
		ctr++;
	}
	MobilePhone marray[ctr];
	for(int i=0; i<ctr; i++)
	{
		fin.read((char*)&mobile, sizeof(MobilePhone));
		marray[i] = mobile;
		marray[i].Display();
	}
	fin.close();

	cout<<"These are all mobile phones sorted by price :"<<endl;
	mobile.sort(marray, ctr);

	for(int j=0; j<ctr; j++)
	{
		marray[j].Display();
	}
	return 0;
}
