//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        // Declare a String to String map
        Map<String,Integer> phoneBook = new HashMap<String,Integer>(); 
        // Initialize it as a new String to String HashMap
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            // Write code here
            phoneBook.put(name, phone);
        }
        while(in.hasNext()){
            String s = in.next();
            // Write code here
            if(phoneBook.get(s) != null){
                System.out.println(s + "=" + phoneBook.get(s));
            }
            else{
                System.out.println("Not found");
            }
        }
        in.close();
    }
}

