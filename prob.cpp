/*
Finding the minimum number of people in a room such that atleast 50% of them have same birthday

*/

/*

The condition checks for probability less than 0.5 because :

let 1 person has different birthday = 356/365 = 1

let 2 persons has different birthday = (356/365) * (364/365)




and so on for n people:

let for n people this probability be p(people having different birthday)

so for n people having same birthday will be 1-p

If given that this probability is atleast 50% or 0.5
then:

		1-p >= 0.5
		1-0.5 >= p
		0.5 >= p
		
Hence this condition.

In general if the probability was given to be x% the the condition would be (1 - (x/100)) >= p


*/




#include <bits/stdc++.h>
using namespace std;


int main()
{
	double num =365.0;
	double den = 365.0;
	
	double prob = 1.0;
	int people = 0;
	
	while(prob>= 0.5)
	{
		
		prob =  (prob *num/den);
		
		people++;
		
		cout<<"The probability that "<<people<<" people have different birthday is "<<prob<<endl;
		
		num--;
	}
	
	
	
	
	return 0;
}
