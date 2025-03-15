#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<map>
using namespace std;

int main()
{
	char ch;
	vector<int> obj;
	list<int> li;
	stack<int> stk;
	map<int, string> mp;

	do
	{
	int n = 0;
	string val = "";
	cout<<"Enter a number : ";
	cin>>n;
	cin.get();
	cout<<"Enter the value at that number : ";
	getline(cin, val);

	obj.push_back(n);
	li.push_back(n);
	stk.push(n);
	mp[n] = val;

	cout<<"Do you want to continue :(y/n) "<<endl;
	cin>>ch;
	}while(ch != 'n');
	cout<<endl;

	cout<<"Integer Vector = ";
	/*for(int i=0;i<obj.size();i++)
	{
		cout<<obj[i]<<" ";
	}
	cout<<endl;*/
	vector<int>::iterator vit = obj.begin();
	while(vit != obj.end())
	{
		cout<<*vit<<" ";
		vit++;
	}
	cout<<endl;

	cout<<"Integer List = ";
	list<int>::iterator lit = li.begin();
	while(lit != li.end())
	{
		cout<<*lit<<" ";
		lit++;
	}
	cout<<endl;
	
	cout<<"Stack Elements : ";
	while(!stk.empty())
	{
		cout<<stk.top()<<" ";
		stk.pop();
	}
	cout<<endl;

	cout<<"Map Keys and Values are :"<<endl;
	map<int, string>::iterator mit = mp.begin();
	while(mit != mp.end())
	{
		cout<<mit->first<<" "<<mit->second<<endl;
		mit++;
	}

	return 0;
}

		
