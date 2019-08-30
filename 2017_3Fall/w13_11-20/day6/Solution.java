import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    private String str;
    public Solution(String s){
        str = s;
    }
    
    public void even(){
        char[] charArr = this.str.toCharArray();
        for(int i = 0; i<this.str.length(); i+=2){
            System.out.print(charArr[i]);
        }
    }
    
    public void odd(){
        char[] charArr = this.str.toCharArray();
        for(int i = 1; i<this.str.length(); i+=2){
            System.out.print(charArr[i]);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String empty = sc.nextLine();
        for(int i = 0; i < t; i++){
            String s = sc.nextLine();
            Solution sol = new Solution(s);
            sol.even();
            System.out.print(" ");
            sol.odd();
            System.out.println();
        }
        sc.close();
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}
