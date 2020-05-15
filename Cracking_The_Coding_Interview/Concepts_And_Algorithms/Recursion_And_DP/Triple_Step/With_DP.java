package Concepts_And_Algorithms.Recursion_and_DP.Triple_Step;

import java.util.Arrays;
import java.util.Scanner;

public class With_DP {

	public static void main(String[] args)
	{
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of steps : ");
		
		int n = sc.nextInt();
		
		System.out.println("The number of ways the child can climb "+n+" steps is : " + find(n));
		

		sc.close();

	}
	
	
	public static int find(int n)
	{
		int arr[]= new int[n+1];
		
		Arrays.fill(arr, -1);
		
		return findDP(arr, n);
	}


	private static int findDP(int arr[], int n)
	{
		if(n<0)
		{
			return 0;
		}
		else if(n==0)
		{
			return 1;
		}
		else if(arr[n]>-1)
		{
			return arr[n];
		}
		else
		{
			arr[n] = findDP(arr, n-1) +  findDP(arr, n-2) + findDP(arr, n-3);
			return arr[n];
		}
	}

}
