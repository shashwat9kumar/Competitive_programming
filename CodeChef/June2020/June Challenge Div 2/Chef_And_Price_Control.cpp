#include <iostream>
using namespace std;
typedef long long ll;


int main() {
	int t;
	cin>>t;
	
	
	while(t-- > 0)
	{
	    int n, k;
	    cin>>n>>k;
	    ll sum=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if(x>k)
	        {
	            sum+= (x-k);
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
