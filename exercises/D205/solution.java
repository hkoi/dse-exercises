import java.util.*;

class D205 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = (int) Math.sqrt(n);
        boolean first = true;
        System.out.print(n + "=");
        for (int i = 2; i <= m; i++) {
            while (n % i == 0) {
                if (!first) {
                    System.out.print("*");
                }
                System.out.print(i);
                n /= i;
                first = false;
            }
        }
        if (n > 1) {
            if (!first) {
                System.out.print("*");
            }
            System.out.print(n);
        }
        System.out.println();
    }
}
