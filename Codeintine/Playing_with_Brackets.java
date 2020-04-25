package Codeintine;

import java.util.*;

public class Playing_with_Brackets {
	
	
	
	public static boolean isValid(String input) {

		Map<Character, Character> map = new HashMap<>();
		    map.put('<', '>');
		    map.put('{', '}');
		    map.put('[', ']');
		    map.put('(', ')');
		 
		 Stack<Character> stack = new Stack<>();
		 
		 for(char ch : input.toCharArray())
		 {
		     if(map.containsKey(ch))
		     {
		         stack.push(ch);
		     } 
		     
		     else if(!stack.empty() && map.get(stack.peek())==ch)
		     {
		         stack.pop();
		     } 
		     
		     else 
		     {
		         return false;
		     }
		     
		 }
		 return stack.empty();
		}
	

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		String str = sc.nextLine();
		
		System.out.println(isValid(str));
		
		sc.close();
		
	}

}
