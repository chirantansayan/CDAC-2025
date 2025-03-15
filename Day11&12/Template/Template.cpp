#include<iostream>
//#include"Template.h"
using namespace std;

template<class T1, class T2>
void swapping(T1& data1, T2& data2)
{
	T1 temp = data1;
	data1 = data2;
	data2 = temp;
	cout<<"The data after swapping is :-"<<endl;
	cout<<data1<<" "<<data2<<endl;
}

template<class T>
void add(T data1, T data2)
{
	T addition = data1 + data2;
	cout<<"The addition of datas = "<<addition<<endl;
}

template<class T>
void subtract(T data1, T data2)
{
	T subtraction = data1 - data2;
	cout<<"The subtraction of datas = "<<subtraction<<endl;
}

template<class T>
void multiply(T data1, T data2)
{
	T multiplication = data1 * data2;
	cout<<"The multiplication of datas = "<<multiplication<<endl;
}

template<class T>
void divide(T data1, T data2)
{
	T division = data1 / data2;
	cout<<"The division of datas = "<<division<<endl;
	/*try
	{
	T division = data1 / data2;
	cout<<"The division of datas = "<<division<<endl;  
	}
	catch(exception e)
	{
		cout<<"Division not possible!"<<endl;
	}*/
}
