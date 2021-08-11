import java.util.*;
import java.io.*;
class D102 {
  public static void main(String[] args) throws IOException {
    Scanner in = new Scanner(System.in);
    in.next(".");
    double fare = in.nextDouble();
    int tencents = (int)Math.round(fare * 10);
    int tencentshalved;
    if (tencents % 2 == 0) {
        tencentshalved = tencents / 2;
    } else {
        tencentshalved = tencents / 2 + 1;
    }
    System.out.format("$%.1f", tencentshalved / 10.0);
  }
}
