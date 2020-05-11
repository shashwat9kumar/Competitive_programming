package Cracking_The_Coding_Interview.Data_Structures.Arrays_and_Strings.Is_Unique;

import java.util.Scanner;




// Checking if all characters in the string is unique . Assuming extended ASCII ( 256 characters)



public class With_Arrays 
{

	public static void main(String[] args)
	{
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Input a String to be checked :");
		
		String str = sc.nextLine();
		
		System.out.println("Does the String have all Unique characters : " + find(str));
		
		
		sc.close();
		
	}

	private static String find(String str) {
		
		
		if(str.length() > 256)   // If the string has more than 256 characters it will automatically repeat one or more characers
		{
			return "No";
		}
		
		int arr[] = new int[256];     // Assuming only 256 characters (ASCII)  ; Unicode has 65536 characters
		
		
		
		//System.out.println(Arrays.toString(ch));
		
		
		
		for(int i=0 ; i < str.length() ; i++)
		{
			int ch = str.charAt(i);
			arr[ch]++;
			if(arr[ch] > 1)
			{
				return "No";
			}
			
		}
		
		return "Yes";
	}

}
