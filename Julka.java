import java.math.*;
import java.util.*;


public class Julka {



   static void play()
    {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i=0;i<t;i++){
        String s1 = sc.next();
        String s2 = sc.next();
        BigInteger total = new BigInteger(s1);
        BigInteger more = new BigInteger(s2);

        BigInteger klaudia = new BigInteger("0");
        BigInteger natalia = new BigInteger("0");
        BigInteger two = new BigInteger("2");


        klaudia = (total.add(more));
        klaudia = klaudia.divide(two);

        natalia = total.subtract(klaudia);

        System.out.println(klaudia);
        System.out.println(natalia);

        }
    }



    public static void main(String args[]) {
        play();
    }
}