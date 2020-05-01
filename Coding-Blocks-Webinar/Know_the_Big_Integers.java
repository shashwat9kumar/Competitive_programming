/*
Question:
Know and Understand the gcd() , nextProbablePrime() and the bitCount() function in BigInteger class

*/


import java.math.*;
import java.util.*;


public class Know_the_Big_Integers {



   static void play()
    {
        Scanner sc = new Scanner(System.in);
        

	System.out.println("Enter 2 numbers : ");


        String s1 = sc.next();
        String s2 = sc.next();
        BigInteger b1 = new BigInteger(s1);
        BigInteger b2 = new BigInteger(s2);
        System.out.println(b1);
        System.out.println(b2);



        System.out.println("The GCD is : "+b1.gcd(b2));     // To find GCD of 2 mumbers
        


	System.out.println("The next probable prime after the 1st number is : " +b1.nextProbablePrime());    // To find the next prime after value b1
        


	System.out.println("The number of 1's in the binary representationof the 1st number is : " + b1.bitCount());      // Count number of 1's in the binary representation of b1
        




    }



    public static void main(String args[]) {
        play();
    }
}