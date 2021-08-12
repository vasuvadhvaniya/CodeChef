import java.util.*;
import java.lang.*;
import java.io.*;
public class problemDifficulty{
   public static void main(String[] args) throws IOException{
      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();
      while(t-->0){
         Map<Integer,Integer> h = new HashMap<>();
         for(int i=0; i<4; i++){
         int a1 = sc.nextInt();
         if(h.containsKey(a1)){
            h.replace(a1,h.get(a1)+1);
         }
         else{
            h.put(a1,1);
         }
      }
         if(h.size()==4){
            System.out.println(2);
         }
         else if(h.size()==1){
            System.out.println(0);
         }
         else if(h.size()==3){
            System.out.println(2);
         }
         else if(h.size()==2){
            int maxValueInMap=(Collections.max(h.values()));
            if(maxValueInMap == 3){
               System.out.println(1);
            }
            else{
               System.out.println(2);
            }
         }
      }
   }
}
