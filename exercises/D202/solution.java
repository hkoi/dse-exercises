import java.util.*;

public class D202 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = (int)Math.sqrt(n);
        for (int i = 1; i <= m; i++) {
            if (n % i == 0) {
                System.out.println(i);
            }
        }
        if (m * m == n) {
            m--;
        }
        for (int i = m; i >= 1; i--) {
            if (n % i == 0) {
                System.out.println(n / i);
            }
        }
    }
}
