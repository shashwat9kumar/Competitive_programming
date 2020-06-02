#include <iostream>
using namespace std;

int solve(int n, int arr[])
{
    int ms = arr[0];
    int count = 1;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]<= ms)
        {
            count++;
            ms= arr[i];
        }
    }
    return count;
    
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	
	while(t-- > 0)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cout<<solve(n,arr)<<endl;
	}
	return 0;
}
