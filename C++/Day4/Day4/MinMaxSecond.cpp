#include<iostream>
#include<climits>
using namespace std;

int mini = INT_MAX, maxi = INT_MIN, secMin = 0, secMax = 0;
void min(int array[], int leng)
{
	for(int i=0; i<leng; i++)
	{
		if(array[i] < mini)
		{
			secMin = mini;
			mini = array[i];
	        }
	}
        cout<<"The minimum number is = "<<mini<<endl;
	cout<<"The second minimum is = "<<secMin<<endl;
}	
void max(int array[], int leng)
{
	for(int i=0; i<leng; i++)
	{
		if(array[i] > maxi)
		{
			secMax = maxi;
			maxi = array[i];
		}
	}
	cout<<"The maximum number is = "<<maxi<<endl;
	cout<<"The second maximum is = "<<secMax<<endl;
}

int main()
{
	int leng = 0;
	cout<<"Enter the length of Array : ";
	cin>>leng;
	cout<<"Enter the Array :"<<endl;

	int array[leng];
	for(int i=0; i<leng; i++)
	{
		cin>>array[i];
	}
	min(array, leng);
	max(array, leng);
	return 0;
}
