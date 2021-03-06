package Cracking_The_Coding_Interview.Data_Structures.Arrays_and_Strings.Check_Permutation;

import java.util.Arrays;
import java.util.Scanner;

public class Using_Sorting {

	public static void main(String[] args)  // We are assuming that the words are only lowercase and contains no appended white spaces
	{
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Input 2 strings : ");
		String str1 = sc.nextLine().toLowerCase().trim();
		String str2 = sc.nextLine().toLowerCase().trim();
		
		System.out.println("Are the 2 string permutations of each other : " + find(str1,str2));
		
		
		sc.close();

	}

	private static String find(String str1, String str2)
	{
		if(str1.length() != str2.length())     // No strings which are of unequal length can be a permutation of one another
		{
			return "No";
		}
		
		char ch1[] = str1.toCharArray();
		char ch2[] = str2.toCharArray();
		Arrays.sort(ch1);
		Arrays.sort(ch2);
		
		for(int i=0;i<ch1.length;i++)
		{
			if(ch1[i] != ch2[i])
			{
				return "No";
			}
		}
		
		
		return "Yes";
	}

}
