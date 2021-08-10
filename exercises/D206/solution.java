import java.util.*;

public class D206 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while (n != 1) {
            System.out.println(n);
            if (n % 2 == 1) {
                n = 3 * n + 1;
            } else {
                n /= 2;
            }
        }
        System.out.println(1);
    }
}
