#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a=0,b=0,c=0,number = 0, root1 = 0,root2 = 0;
	cout<<"Enter the co-eficents of x^2, x and constant :"<<endl;
	cin>>a>>b>>c;
	root1 = ((-b+sqrt(pow(b,2)-(4*a*c)))/2*a);
	root2 = ((-b-sqrt(pow(b,2)-(4*a*c)))/2*a);
	cout<<"\n Roots of the equation :";
	cout<<root1<<" "<<root2;
	return 0;
}
