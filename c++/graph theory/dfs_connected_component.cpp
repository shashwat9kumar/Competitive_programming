#include <bits/stdc++.h>
using namespace std;


int n=10;
int visited[10]{0};
int count = 0;
vector< list<int> > al(10);
int component[10]{0};


void dfs(int at)
{
	visited[at] =1;
	component[at] = count;
	
	
	list<int> li = al[at];
	for(list<int>::iterator iter=li.begin();iter!=li.end();++iter)
	{
		int ele = *iter;
		if(visited[ele] != 1)
		{
			dfs(ele);	
		}
	}
}


void countcomponent()
{
	for(int i=0;i<n;i++)
	{
		if(visited[i] == 0)
		{
			count++;
			dfs(i);
		}
	}
}



int main()
{
	al[0].push_back(1);
	al[0].push_back(9);
	
	al[1].push_back(0);
	al[1].push_back(9);
	
	al[2].push_back(4);
	al[2].push_back(7);
	al[2].push_back(8);
	
	
	al[3].push_back(5);
	
	al[4].push_back(2);
	
	al[5].push_back(6);
	al[5].push_back(3);
	
	al[6].push_back(5);
	
	al[7].push_back(2);
	al[7].push_back(8);
	
	al[8].push_back(2);
	al[8].push_back(7);
	
	al[9].push_back(0);
	al[9].push_back(1);
	
	
	countcomponent();
	
	return 0;
}
