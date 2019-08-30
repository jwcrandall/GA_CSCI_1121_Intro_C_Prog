import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    int numberOfSwaps;
    int[] array;
    
    Solution(int n, int[] a){
        this.numberOfSwaps = n;
        this.array = a;
    }
    
    void bubbleSort(){
        int n = this.array.length;
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1 ; j++){
                if(this.array[j] > this.array[j+1]){
                    swap(j,j+1);
                    //System.out.println(Arrays.toString(this.array));
                }
            }
        }
    }
    
    void swap(int i, int j){
        int temp = this.array[i];
        this.array[i] = this.array[j];
        this.array[j] = temp;
        this.numberOfSwaps ++;
    }
    
    int getNumberOfSwaps(){
        return(this.numberOfSwaps);
    }
    
    int getFirstElement(){
        return(this.array[0]);
    }
    
    int getLastElement(){
        return(this.array[this.array.length - 1]);
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        // Write Your Code Here
        Solution sol = new Solution(0, a);
        sol.bubbleSort();
        System.out.println("Array is sorted in " + sol.getNumberOfSwaps() + " swaps." );
        System.out.println("First Element: " + sol.getFirstElement());
        System.out.println("Last Element: " + sol.getLastElement());
        
        
    }
}
