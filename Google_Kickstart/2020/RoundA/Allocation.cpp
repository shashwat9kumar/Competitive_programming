
#include <bits/stdc++.h>
using namespace std;


int solve(int arr[], int n, int k)
{
	int count=0, i=0;
    sort(arr,arr+n);
    while(k>0)
    {
        if(i==n)
        {
            break;
        }

        if(arr[i]<=k)
        {
            k-=arr[i];
            ++i;
            ++count;
        }
        else
        {
            break;
        }
    }
    return count;
}



int main(void)
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int t;
	cin>>t;
	int x=1;
	while(x<=t)
	{
		int n,k;
        cin>>n>>k;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
		
		cout<<"Case #"<<x<<": "<<solve(arr,n,k)<<endl;
		x++;
	}
}
