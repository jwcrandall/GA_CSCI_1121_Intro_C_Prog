import java.util.*;
import java.math.*;

public class Day2 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double mealCost = scan.nextDouble(); // original meal price
        int tipPercent = scan.nextInt(); // tip percentage
        int taxPercent = scan.nextInt(); // tax percentage
        scan.close();
      
        // Write your calculation code here.
        double value = mealCost + mealCost*(tipPercent*0.01) + mealCost*(taxPercent*0.01);
      
        // cast the result of the rounding operation to an int and save it as totalCost 
        int totalCost = (int) Math.round(value);
      
        // Print your result
        System.out.println("The total meal cost is "+ totalCost + " dollars.");
    }
}
