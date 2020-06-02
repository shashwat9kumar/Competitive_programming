#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	ll n =t;
	ll arr[t], x=0;
	while(t-- > 0)
	{
	    cin>>arr[x++];
	}
	sort(arr,arr + n );
	x = n;
	ll tot = 0;
	for(ll i = 0;i<n;i++)
	{
	    ll temp = (arr[i] * x);
	    if(temp > tot)
	    {
	        tot = temp;
	    }
	    x--;
	}
	cout<<tot<<endl;
	return 0;
}
