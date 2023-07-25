import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();

      for(int i = 0; i < n; i++) {
          String word = sc.next();
          char c1 = word.charAt(0);
          char c2 = word.charAt(word.length() - 1);
    	  System.out.print(c1);
    	  System.out.println(c2);
      }
      sc.close();
   }
}