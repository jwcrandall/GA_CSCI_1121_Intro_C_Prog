import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    static boolean checkPrime(int n){
        //1 is not prime 
        if (n == 1){
            return false;
        }
        //2 is prime
        if (n == 2){
            return true;
        }
        //all evens greatere than 2 are not prime
        if (n%2 == 0){
            return false;
        }
        //check odds up to the square root of n, because if n is not prime it can be factored into two roots a and b such that n = a*b,if both a and b are greater than square root, a* b would be greatere than n. So at least one of those factors must be less than of equal to the square root of n, and to check if n is prime we only need to test for factors less then or equal to the square root.
        for(int i = 3; i*i <= n; i += 2){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        /* Enter your code here. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i<n; i++){
            int val = sc.nextInt();
            if(checkPrime(val)){
                System.out.println("Prime");
            }
            else{
                System.out.println("Not prime");
            }
        }
    }
}

