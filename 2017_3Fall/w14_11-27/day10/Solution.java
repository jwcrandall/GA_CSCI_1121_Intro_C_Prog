import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    //public int decimalToBinary(int n, StringBuilder sb){
        //base
    //    if(n <= 1){
    //        (n){
    //            sb.append((n%2)
    //        }
    //        return (Integer.parseInt(sb.toString());)
    //    }
    //}
    
    //decimal to binary
    
    public static String decimalToBinaryString(int d){
        int b=0;
        int p=0;
        StringBuilder sb = new StringBuilder();
        while(true){
            if(d == 0){
                break;
            }
            else{
                int temp = d%2;
                sb.append(temp);
                //System.out.println(sb);
                //b += temp*Math.pow(10,p);
                //System.out.println(b);
                d = d/2;
                //p++;
            }
        }
        StringBuilder sbr = sb.reverse();
        return (sbr.toString());
    }
    
    
    //max number of ones
    public static int maxConsecutvieOnes(String bString){
        char[] b = bString.toCharArray();
        int count = 0;
        int maxCount = 0;
        for(int i = 0; i< b.length; i ++){
            //System.out.println(count);
            if (b[i] == '1'){
                count ++;
            }
            if (maxCount < count){
                maxCount = count;
            }            
            if (b[i] == '0'){
                count = 0;
            }
        }
        
        //while(true){
        //    if (b == 0){
        //        break;
        //    }
        //    else{
        //        if(b%2 == 1){
        //            count++;
        //        }
        //        if (maxCount < count){
        //                maxCount = count;
        //        }
        //        if(b%2 == 0){
        //            count = 0;
        //        } 
        //        b = b/10;
        //    }
        //}
        return (maxCount);
    }
    
    //binary to decimal
    //public int binaryToDecimal(int b){
        //decimal
    //    int d = 0;
        //power
    //    int p = 0;
    //    while(true){
    //        if(b == 0){
    //            break;
    //        }
    //        else{
    //            int temp = b%10;
    //            decimal += temp*Math.pow(2,p);
    //            b = b/10;
    //            p++;
    //        }
    //    }
    //    return(d);
    //}

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //StringBuilder sb = new StringBuilder();
        int n = in.nextInt();
        //System.out.println(decimalToBinaryString(n));
        System.out.println(maxConsecutvieOnes(decimalToBinaryString(n)));
        in.close();
        
    }
}

