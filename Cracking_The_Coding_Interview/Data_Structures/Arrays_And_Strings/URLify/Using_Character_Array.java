package Cracking_The_Coding_Interview.Data_Structures.Arrays_and_Strings.URLify;

import java.util.Scanner;

public class Using_Character_Array 
{

	public static void main(String[] args)
	{
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a string to URLify : ");
		String str = sc.nextLine().trim();
		
		System.out.println("The URL form is : " + find(str));
		
		sc.close();

	}

	private static String find(String str)  // Assuming that all words have only a single space between them
	{
		char ch[] = str.toCharArray();
		
		int spaceCount=0;
		for(int i=0;i<ch.length;i++)
		{
			if(ch[i]==' ')
			{
				spaceCount++;
			}
		}
		
		int newLength = ch.length + 2*spaceCount;
		
		char chNew[] = new char[newLength];
		int x=0;
		for(int i=0;i<ch.length;i++)
		{
			if(ch[i] != ' ')
			{
				chNew[x++] = ch[i];
			}
			else
			{
				chNew[x++]='%';
				chNew[x++]='2';
				chNew[x++]='0';
			}
		}
		
		String url = new String(chNew);
		return url;
	}

}
