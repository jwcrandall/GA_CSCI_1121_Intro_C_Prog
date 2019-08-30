import java.io.*;
import java.util.*;
import java.util.concurrent.ThreadLocalRandom;

public class Solution {
    public int[] generateSorted(final int length, final int minVal, final int maxVal) {
        List<Integer> data = new ArrayList<>(length);
        data.add(0);
        for (int i = 0; i < length-1; i++) {
            int rndNum = ThreadLocalRandom.current().nextInt(minVal, maxVal + 1);
            int insertionPoint = Collections.binarySearch(data, rndNum);
            data.add(insertionPoint > -1 ? insertionPoint : - insertionPoint - 1, rndNum);
        }
        return data.stream().mapToInt(i -> i).toArray();
    }
    public static void main(String[] args) {
        int tests = 5;
        for (int t = 0; t<tests; t++){
 
            int min = 1;
            int max = 5;
            int lectures = ThreadLocalRandom.current().nextInt(min, max + 1);
            System.out.println(lectures);
            for(int i = 0; i < lectures ;i++){
                min = 3;
                max = 200;
                int numStudentsInClass = ThreadLocalRandom.current().nextInt(min, max + 1);
                min = 1;
                max = numStudentsInClass;
                int cancelationThreshold = ThreadLocalRandom.current().nextInt(min, max + 1);
                System.out.println(numStudentsInClass + " " + cancelationThreshold);
                
                Solution obj = new Solution();
                //System.out.println(Arrays.toString(obj.generateSorted(numStudentsInClass, -1000, 1000)));

                int[] publicArray = obj.generateSorted(numStudentsInClass,-1000,1000);
               
                StringBuilder builder = new StringBuilder();
                for (Integer value : publicArray) {
                    builder.append(value + " ");
                }
                String text = builder.toString();
                System.out.println(text);
            }
        }
    }
}
