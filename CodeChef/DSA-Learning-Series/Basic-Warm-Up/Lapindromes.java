/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		
		while(t-- > 0)
		{
		    String x = sc.next();
		    String s1, s2;
		    int n= x.length();
		    s1 = x.substring(0,n/2);
		    if(n%2==0)
		    {
		        s2=x.substring(n/2,n);
		    }
		    else{
		        s2=x.substring(n/2+1,n);
		    }
		    System.out.println(solve(s1,s2));
		    
		}
	}
	
	public static String solve(String s1, String s2)
	{
	    char ch1[] = s1.toCharArray();
	    char ch2[] = s2.toCharArray();
	    
	    Arrays.sort(ch1);
	    Arrays.sort(ch2);
	    
	    for(int i=0;i<ch1.length;i++)
	    {
	        if(ch1[i] != ch2[i])
	        {
	            return "NO";
	        }
	    }
	    return "YES";
	}
}
