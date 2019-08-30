import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static int calculateHourglass(int arr[][], int i, int j){
        return ( arr[i][j] + arr[i][j+1]+ arr[i][j+2]+
                arr[i+1][j+1]+
                arr[i+2][j] + arr[i+2][j+1]+ arr[i+2][j+2]
               );
    }
    
    public static int maxHourglassValue(int arr[][]){
        int maxValue = Integer.MIN_VALUE;
        int value = 0;
        for(int i=0; i < arr[0].length -2; i++){
            for(int j=0; j < arr[1].length -2; j++){
                value  = calculateHourglass(arr, i,j);
                //System.out.println(value);
                if(value > maxValue){
                    maxValue = value;
                }
            }
        }
        return (maxValue);  
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for(int i=0; i < 6; i++){
            for(int j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
            }
        }
        System.out.println(maxHourglassValue(arr));
    }
}

