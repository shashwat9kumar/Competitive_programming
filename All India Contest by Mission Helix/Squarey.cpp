/*

One needs to see vareity of data regularly to see patterns for the solutions. Well today we have to see one as well. Ayush thinks that the question resembles data of squares of natural number so he want to print squares of first  natural numbers to check his assumption.

Can you take this one for the team and write code to print them. 😃

Note: Please print the values in ascending order.

Optional:

Upload your story after contest ends : Task screenshot of accepted green ticks. With these screenshot, when contest ends later you can post your story over Linkedin.

Compulsory hashtag to add is #23MayCodingContest. Use more appropriate hashtags that you want to add yourself on your Linkedin story.

Input Format

A single integer 

Constraints


Output Format

Print  space seperated integers on a line denoting first  squares in the ascending order

Sample Input 0

3
Sample Output 0

1 4 9

*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int sq=i*i;
        cout<<sq<<" ";
    }
    return 0;
}
