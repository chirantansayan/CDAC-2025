#include<iostream>
using namespace std;
void area(int length, int breadth)
{
	int area;
	area = length*breadth;
	cout<<"Area of Rectangle = "<<area<<endl;

}
int main()
{
	int length,breadth;
	cout<<"Enter the length and breadth of the rectangle"<<endl;
	cin>>length>>breadth;
	area(length,breadth);
	return 0;
}
