#include <iostream>
using namespace std;
typedef long long int ll;


int main() {
	int t;
	cin>>t;
	
	while(t-- > 0)
	{
	    int g;
	    cin>>g;
	    for(int j=0;j<g;j++)
	    {
	        int i,q;
	        ll n;
	        cin>>i>>n>>q;
	        if(n%2 == 0)
	        {
	            cout<<(n/2)<<endl;
	        }
	        else
	        {
	            if(i == q)
	            {
	                cout<<(n/2)<<endl;
	            }
	            else
	            {
	                cout<<((n/2)+1)<<endl;
	            }
	        }
	    }
	}
	return 0;
}
