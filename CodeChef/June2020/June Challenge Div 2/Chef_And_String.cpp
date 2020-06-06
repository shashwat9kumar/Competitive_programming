#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t-- > 0)
	{
	    string x;
	    cin>>x;
	    int i;
	    int n = x.length();
	    int sum=0;
	    for(i=0;i<n-1;i++)
	    {
	        if(x[i] == 'x')
	        {
	            if(x[i+1] == 'y')
	            {
	                sum++;
	                i++;
	            }
	        }
	        else if(x[i] == 'y')
	        {
	            if(x[i+1] == 'x')
	            {
	                sum++;
	                i=i+1;
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
