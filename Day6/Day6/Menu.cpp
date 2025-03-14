#include<iostream>
using namespace std;

void sortArray(int *array, int leng)
{
	for(int i=0; i<leng; i++)
	{
		for(int j=i+1; j<leng; j++)
		{
			if(array[i]>array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
void displayArray(int *array, int leng)
{
	cout<<"The Array is :"<<endl;
	for(int i=0; i<leng; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
void averageArray(int *array, int leng)
{
	float average = 0;
	int sum = 0;
	for(int i=0; i<leng; i++)
	{
		sum = sum + array[i];
	}
	average = sum/leng;
	cout<<"The average of numbers is = "<<average<<endl;
}
int multiplyArray(int *arr, int leng)
{
	int i;
	cout<<"The Array multiplied by 2 = ";
	for(i=0;i<leng;i++)
	{
		cout<<arr[i]*2<<" ";
	}
	cout<<endl;
	return 0;
}
void AddChar()
{
	int size = 0, i = 0;
	string str;
	cout<<"Enter size :"<<endl;
	cin>>size;
	char *c = new char[size];
	cout<<"Enter the sequence of characters "<<endl; 
	for(i=0;i<size;i++)
	{
		cin>>c[i];
	}
	for(i=0;i<size;i++)
	{
		str+= c[i];
	}
	cout<<"Converted char array to String : "<<str<<endl;

}

int main()
{
	cout<<"-------------------- Menu -------------------------"<<endl;
	cout<<endl;
	cout<<" 1. Sort Array"<<endl;
	cout<<" 2. Average Array"<<endl;
	cout<<" 3. Multiply Array"<<endl;
	cout<<" 4. Character Array to String"<<endl;
	cout<<endl;
	cout<<"----------------------------------------------------"<<endl;
	
	int choice;
	cout<<"Enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{	
				int leng = 0;
	                        cout<<"Enter the length of Array : ";
	                        cin>>leng;
	                        int *p = new int [leng];
	                        cout<<"Enter the Array :"<<endl;
	                        for(int i=0; i<leng; i++)
	                        {
		                        cin>>p[i];
	                        }
				sortArray(p, leng);
				displayArray(p, leng);
				break;
			}
		case 2:
			{	
				int leng = 0;
	                        cout<<"Enter the length of Array : ";
	                        cin>>leng;
	                        int *p = new int[leng];
	                        cout<<"Enter the Array :"<<endl;
	                        for(int i=0; i<leng; i++)
	                        {
		                        cin>>p[i];
	                        }
				averageArray(p, leng);
				break;
			}
		case 3:
			{	
				int leng = 0;
	                        cout<<"Enter the length of Array : ";
	                        cin>>leng;
	                        int *p = new int[leng];
	                        cout<<"Enter the Array :"<<endl;
	                        for(int i=0; i<leng; i++)
	                        {
		                        cin>>p[i];
	                        }
				multiplyArray(p, leng);
				break;
			}  
		case 4:
			{	
				AddChar();
				break;
			}
		default:
			{
				cout<<"Enter a valid option."<<endl;
			}
	}
	return 0;
}
