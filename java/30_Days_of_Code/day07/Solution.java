import java.io.*;
import java.util.*;


public class Solution {
/*   
    private int arrSize;
    private int arrInt[];
    public Solultion(int n, int arr[]){
        arrSize = n;
        
        for(int i = 0; i<n;i++){
            arrInt[i] = arr[i];
        }
    }  
*/
    
    public static int[] reverse(int size, int[] arr){
        for(int j = 0;j < size; j++){
            int temp = arr[j];
            arr[j] = arr[size-1];
            arr[size-1] = temp;
            size--;
        }
        return (arr);
     }
/*    
     public void reverseOdd(){
        int r = this.arrSize;
        //should swap the middle element with itself
        for(int j = 0;j <= r; j++){
            int temp = this.arrInt[j];
            this.arrInt[j] = this.arrInt[r-1];
            this.arrInt[r-1] = temp;
            r--;
        }
     }
*/

    /*
    public static void printArr(int[] arr){
        for(int i=0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }
    */
    
    public static void printArr(int[] arr){
        for(int i: arr){
            System.out.print(i + " ");
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0; i < n; i++){
            arr[i] = in.nextInt();
        }
        in.close();
        /*
        Solution sol = new Solution(n, arr[]);
        if(n%2 == 0){
           Sol.reverseEven();
        }
        else{
           Sol.reverseOdd();
        }
        */
        printArr(reverse(n,arr));
        
        //System.out.print(Arrays.toString(reverse(n,arr)));
    }
}

