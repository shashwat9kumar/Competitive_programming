#include <iostream>
using namespace std;

void solve (int n)
{
    int sq=1;
    int arr[n][n];

    for(int x=0;x<(n/2);x++)
    {

        for(int j=x;j<n-x;j++)
        {
            arr[x][j]=sq++;
        }
        for(int i=x+1;i<n-x;i++)
        {
            arr[i][n-x-1]=sq++;
        }
        for(int j=n-x-2;j>=x;j--)
        {
            arr[n-x-1][j] = sq++;
        }
        for(int i=n-x-2;i>x;i--)
        {
            arr[i][x]=sq++;
        }

    }

    if(n%2 != 0)
    {
        arr[n/2][n/2]= sq++;
    }



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t-- > 0)
	{
	    int n;
	    cin>>n;
	    solve(n);
	}
	return 0;
}
