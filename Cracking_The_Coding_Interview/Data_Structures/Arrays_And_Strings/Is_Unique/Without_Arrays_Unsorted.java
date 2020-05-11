package Cracking_The_Coding_Interview.Data_Structures.Arrays_and_Strings.Is_Unique;

import java.util.Scanner;

public class Without_Arrays_Unsorted   // Brute force algorithm : Checking every character to itself
{

	public static void main(String[] args)
	{
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Input a String to be checked :");
		
		String str = sc.nextLine();
		
		System.out.println("Does the String have all Unique characters : " + find(str));
		
		
		sc.close();

	}

	private static String find(String str)  // Finding the possibility of a repeated character O(n^2)
	{
		
		if(str.length() > 256 )// If the string has more than 256 characters it will automatically repeat one or more characers
		{
			return "No";
		}
		
		for(int i=0 ; i < str.length() ; i++)
		{
			for(int j=i+1; j < str.length(); j++)
			{
				if(str.charAt(i) == str.charAt(j))
				{
					return "No";
				}
			}
		}
		
		return "Yes";
	}

}
