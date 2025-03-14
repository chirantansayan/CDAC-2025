#include<iostream>
using namespace std;

struct Product
{
	char ProductID;
	char ProductName[10];
	float Quantity;
	float Price;
};

void Accept(Product * const P1)
{
	cout<<"Enter the Product-ID : ";
	cin>>P1->ProductID;
	cout<<"Enter the Product Name : ";
	cin>>P1->ProductName;
	cout<<"Enter the Quantity : ";
	cin>>P1->Quantity;
	cout<<"Enter the Price : ";
	cin>>P1->Price;
	cout<<endl;
	
}
void Display(const Product * const P1)
{
	cout<<"The Product details are :-"<<endl;
	cout<<"Product-ID = "<<P1->ProductID<<endl;
	cout<<"Product Name = "<<P1->ProductName<<endl;
	cout<<"Quantity = "<<P1->Quantity<<endl;
	cout<<"Price = "<<P1->Price<<endl;
	cout<<endl;
}

int main()
{
	int i,n;
	cout<<"Enter the Size of array :"<<endl;
	cin>>n;
	Product P1[n];
	for(i = 0;i<n;i++)
	{	
	Accept(&P1[i]);
	}
	for(i = 0;i<n;i++)
	{
	Display(&P1[i]);
	}
	return 0;
}
