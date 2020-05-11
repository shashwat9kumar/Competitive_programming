package Cracking_The_Coding_Interview.Data_Structures.Arrays_and_Strings.Is_Unique;

import java.util.Scanner;

public class Only_A_to_Z_Bit_Vector // Assuming the string only has characters from small a to small z
{

	public static void main(String[] args)
	{
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Input a String to be checked :");
		
		String str = sc.nextLine();
		
		System.out.println("Does the String have all Unique characters : " + find(str));
		
		
		sc.close();

	}

	private static String find(String str) // using the bits of int as a vector to reduce space 
	{
		
		int check =0;
		
		for(int i=0;i<str.length();i++)
		{
			int ch = str.charAt(i)-'a';
			
			if((check & (1 << ch)) > 0)
			{
				return "No";
			}
			check = check | (1 << ch);
		}
		
		return "Yes";
	}

}
