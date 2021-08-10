import java.util.*;

public class D208 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a = -2147483648, b = -2147483648;
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            if (x >= a) {
                b = a;
                a = x;
            } else if (x > b) {
                b = x;
            }
        }
        System.out.println(a);
        System.out.println(b);
    }
}
