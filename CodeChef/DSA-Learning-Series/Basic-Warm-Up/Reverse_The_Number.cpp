#include <iostream>
using namespace std;


int solve(int num)
{
    
    
    int temp=0;
    while(num!=0)
    {
        int d= num%10;
        temp = temp*10 + d;
        num=num/10;
    }
    return temp;
}


int main() {
	int t;
	cin>>t;
	while(t-- > 0)
	{
	    int num;
        cin>>num;
	    cout<<solve(num)<<endl;
	}
	return 0;
}
