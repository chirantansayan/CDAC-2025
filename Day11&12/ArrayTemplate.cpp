#include<iostream>
using namespace std;

template<class T>
class Array
{
	public:	
	T arr[5];
	int size;
	void accept()
	{

		cout<<"Enter Array Elements :"<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<"\t";
		}
		cout<<endl;
	}
};

int main()
{
	Array<char> a1;
	a1.accept();
	a1.display();

	Array<int> a2;
	a2.accept();
	a2.display();

	Array<float> a3;
	a3.accept();
	a3.display();
	
	return 0;
}
