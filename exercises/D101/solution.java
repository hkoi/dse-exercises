import java.util.*;

class D101 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int a = in.nextInt();
    int b = a / 10000000;
    if (b == 2) {
      System.out.println("Fixed");
    } else if (b == 3) {
      System.out.println("Fixed");
    } else {
      System.out.println("Mobile");
    }
  }
}
