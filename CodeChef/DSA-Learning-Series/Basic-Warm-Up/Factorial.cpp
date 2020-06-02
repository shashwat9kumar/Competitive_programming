#include <iostream>
using namespace std;

typedef long long int ll;



ll solve(ll n)
{
    ll  x=5;
    ll num = 0;
    while(x <= n)
    {
        num = num + (n/x);
        x=x*5;
    }
    return num;
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t-- > 0)
	{
	    ll n;
	    cin>>n;
	    cout<<solve(n)<<endl;
	}
	return 0;
}
