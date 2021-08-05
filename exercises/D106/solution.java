import java.util.*;

public class D106 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int units = n % 10;
        System.out.print(n);
        if (n >= 10 && n / 10 % 10 == 1) {
            System.out.println("th");
        } else if (units == 1) {
            System.out.println("st");
        } else if (units == 2) {
            System.out.println("nd");
        } else if (units == 3) {
            System.out.println("rd");
        } else {
            System.out.println("th");
        }
    }
}
