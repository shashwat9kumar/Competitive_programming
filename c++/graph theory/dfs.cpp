#include <bits/stdc++.h>
using namespace std;



void dfs(int loc, int arr[], vector < list<int> > al)
{
	if(arr[loc]==1)
	{
		return;
	}
	else
	{
		arr[loc]=1;
		cout<<loc<<endl;
	}
	
	list<int> li = al[loc];
	for(list<int>::iterator iter=li.begin();iter!=li.end();++iter)
	{
		int ele = *iter;
		dfs(ele, arr, al);
	}
}



int main()
{
	int n=4;
	int arr[n]{0};
	vector < list<int> > adlist(n);
	
	adlist[0].push_back(1);
	adlist[0].push_back(2);
	adlist[0].push_back(3);
	
	adlist[1].push_back(0);
	adlist[1].push_back(2);
	
	adlist[2].push_back(1);
	adlist[2].push_back(0);
	
	adlist[3].push_back(0);
	
	
	int c=0;
	
	for(vector < list<int> >::iterator i=adlist.begin(); i!=adlist.end();++i)
	{
		cout<<"The elements associated with "<<c++<<" are :  "<<endl;
		
		list<int> li = *i;
		
		for(list<int>::iterator iter=li.begin();iter!=li.end();++iter)
		{
			cout<<*iter<<"   ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
	
	dfs(2, arr, adlist);
}
