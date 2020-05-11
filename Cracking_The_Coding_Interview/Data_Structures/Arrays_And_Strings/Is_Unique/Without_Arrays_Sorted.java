package Cracking_The_Coding_Interview.Data_Structures.Arrays_and_Strings.Is_Unique;

import java.util.Arrays;
import java.util.Scanner;

public class Without_Arrays_Sorted {

	public static void main(String[] args) 
	{
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Input a String to be checked :");
		
		String str = sc.nextLine();
		
		System.out.println("Does the String have all Unique characters : " + find(str));
		
		
		sc.close();
		
	}

	private static String find(String str) 
	{
		char ch[] = str.toCharArray();
		Arrays.sort(ch);
		
		for(int i=0;i<ch.length-1;i++)
		{
			if(ch[i]==ch[i+1])
			{
				return "No";
			}
		}
		return "Yes";
	}

}
