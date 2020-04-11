/*

Question:
Choose a subset of 6 numbers (in ascending order without repitition) so as to form a set of 6 incesing numbers from a pool of a given set eg: {1,3,6,7,9,10,12,15,19}(both included)



Approach it via brute force


*/



/*

Approaching the solution with brute force would typically mean implementing 6 loops for picking 6 integers with 1st loop from 1 to n-6 element of array , 2nd from 2 to n-5th element and so on


Also assuming that array has more than 6 elements

*/



#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n1,n2,n3,n4,n5,n6;
	
	int arr[] ={1,2,3,4,5,6,7};
	
	int n = 7;
	
	for(n1 =0 ; n1 <n-5; n1++)
	{
		for(n2 =n1+1 ; n2 <n-4; n2++)
		{
			for(n3 =n2+1 ; n1 <n-3; n3++)
			{
				for(n4 =n3+1 ; n4 <n-2; n4++)
				{
					for(n5 =n4+1 ; n5 <n-1; n5++)
					{
						for(n6 =n5+1 ; n6 <n; n6++)
						{
							cout<<arr[n1]<<" "<<arr[n2]<<" "<<arr[n3]<<" "<<arr[n4]<<" "<<arr[n5]<<" "<<arr[n6]<<endl;
							//count++;
						}
						
					}
				}
			}
		}
	}
	
	
	//cout<<"\n\nThe total subsets are : "<<count<<endl;
	return 0;
}
