#include<iostream>
#include"Template.cpp"
using namespace std;

int main()
{
	/*short shortInt = 0;
	char character = 0;
	int integer = 0;
	long bigInt = 0;
	double bigDeci = 0;
	bool boolean = false;
	string String = "";
*/
	float data1 = 0; 
	int data2 = 0;
	cout<<"Enter first data : ";
	cin>>data1;
	cout<<"Enter second data : ";
	cin>>data2;
	cout<<endl;

	swapping(data1, data2);
	add('A', 'J');
	subtract('z', 'A');
	multiply(23.23, 11.42);
	divide(false, true);

	return 0;
}
