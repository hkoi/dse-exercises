import java.io.*;
import java.util.*;

class D102 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    in.skip(".");
    double fare = in.nextDouble();
    int tenCents = (int)Math.round(fare * 10);
    int tenCentsHalved;
    if (tenCents % 2 == 0) {
        tenCentsHalved = tenCents / 2;
    } else {
        tenCentsHalved = tenCents / 2 + 1;
    }
    System.out.format("$%.1f", tenCentsHalved / 10.0);
  }
}
