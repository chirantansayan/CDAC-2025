#include<iostream>
#include"Array.h"
using namespace std;

int main()
{
	int size = 0, leng = 0, choice = 0, index = 0, i = 0;
	char ch = 0;
	cout<<"Enter the size of single integer array : ";
	cin>>size;
	Array arr1(size);
	arr1.Accept();
	arr1.Display();
	cout<<endl;
	Array arrsp(arr1);
	arrsp.Display();
	cout<<endl;
	Array *arr2 = new Array[10];

	cout<<"------------------- Menu -----------------"<<endl;
	cout<<endl;
	cout<<"1. Accept"<<endl;
	cout<<"2. Display"<<endl;
	cout<<"3. Sort"<<endl;
	cout<<"4. Find max"<<endl;
	cout<<"5. Find min"<<endl;
	cout<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;

	do
	{
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				while(i<10)
				{
					arr2[i].Accept();
					i++;
					break;
				}
				break;
			}
		case 2:
			{
				cout<<"Enter the index to display : ";
				cin>>index;
				for(int j=0; j<10; j++)
				{
					if(j == index)
					{
						arr2[j].Display();
						break;
					}
				}
				break;
			}
		case 3:
			{
				cout<<"Enter the index to sort : ";
				cin>>index;
				for(int j=0; j<10; j++)
				{
					if(j == index)
					{
						arr2[j].sort();
						cout<<"Array is Sorted select display option 2."<<endl;
						break;
					}
				}
				break;
			}
		case 4:
			{
				cout<<"Enter the index to find max : ";
				cin>>index;
				for(int j=0; j<10; j++)
				{
					if(j == index)
					{
						cout<<"Maximum element is = "<<arr2[j].findmax()<<endl;
						break;
					}
				}
				break;
			}
		case 5:
			{
				cout<<"Enter the index to find min : ";
				cin>>index;
				for(int j=0; j<10; j++)
				{
					if(j == index)
					{
						cout<<"Minimum element is = "<<arr2[j].findmin()<<endl;
						break;
					}
				}
				break;
			}
		default:
			{
				cout<<"Invalid choice!"<<endl;
			}
	}
	cout<<"Do you want to continue (Y/N) : ";
	cin>>ch;
	cout<<endl;
	}while(ch == 'Y');

	return 0;
}
