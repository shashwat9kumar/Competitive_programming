#include <bits/stdc++.h>

using namespace std;


/*

Question:
Find the factorial of a very big number

*/


/*

Using arrays to find the factorial

Using arrays to store the digits  (Using the concept of carry to add digits when multiplying)
*/




int multiply(int arr[], int num, int n)
{
	int prod =1;
	int carry=0;
	
	for(int i=0;i<n;i++)
	{
		prod=arr[i]*num + carry;
		arr[i] = prod %10;
		carry =prod/10;
	}
	
	while(carry>0)
	{
		int d=carry%10;
		arr[n++]=d;
		carry=carry/10;
	}
	
	return n;
}


void factorial(int num)
{
	int arr[10000];
	
	int n=1;
	arr[0]=1;  // factorial start from 1
	
	
	for(int i=2;i<=num;i++)
	{
		n=multiply(arr,i,n);
	}
	
	cout<<"The factorial is :"<<endl;
	
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i];
	}
}


int main()
{
	
	factorial(120);
	
	return 0;
}
