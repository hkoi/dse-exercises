import java.util.*;
public class D101 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int a = in.nextInt();
    int b = a / 10000000;
    if (b == 2) {
      System.out.println("fixed");
    } else if (b == 3) {
      System.out.println("fixed");
    } else {
      System.out.println("mobile");
    }
  }
}
