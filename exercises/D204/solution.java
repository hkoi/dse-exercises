import java.util.*;

class D204 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = n / 2;
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= m + i; j++) {
                if (j == m - i || j == m + i) {
                    System.out.print("#");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        for (int i = m - 1; i >= 0; i--) {
            for (int j = 0; j <= m + i; j++) {
                if (j == m - i || j == m + i) {
                    System.out.print("#");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
