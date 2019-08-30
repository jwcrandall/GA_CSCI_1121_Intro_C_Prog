import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int rd = scan.nextInt();
        int rm = scan.nextInt();
        int ry = scan.nextInt();
        
        int ed = scan.nextInt();
        int em = scan.nextInt();
        int ey = scan.nextInt();
        int fine = 0;
       
        
        scan.close();
        if(rd > ed && rm == em && ry == ey){
            fine = 15*(rd-ed);
            System.out.println(fine);
        }
        else if(rm > em && ry == ey){
            fine = 500*(rm - em);
            System.out.println(fine);
        }
        else if (ry > ey){
            System.out.println(10000);
        }
        else{
            System.out.println(0);
        }
       
        
        
    }
}
