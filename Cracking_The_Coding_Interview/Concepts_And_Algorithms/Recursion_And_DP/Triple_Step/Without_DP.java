package Concepts_And_Algorithms.Recursion_and_DP.Triple_Step;

import java.util.Scanner;

public class Without_DP {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of steps : ");
		
		int n = sc.nextInt();
		
		System.out.println("The number of ways the child can climb "+n+" steps is : " + find(n));
		

		sc.close();
	}

	private static int find(int n)
	{
		
		if(n<0)
		{
			return 0;
		}
		else if(n==0)
		{
			return 1;
		}
		else
		{
			return find(n-1)+ find(n-2) + find(n-3);
		}
		
	}

}
