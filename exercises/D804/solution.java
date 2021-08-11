import java.util.*;

class D804 {
    static int[] a = new int[100000];
    static int[] b = new int[100000];
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        for (int i = 0; i < m; i++) {
            b[i] = in.nextInt();
        }
        int j = 0, k = 0;
        for (int i = 0; i < n + m; i++) {
            // short circuit: k == m is checked first
            if (k == m || j != n && a[j] < b[k]) {
                System.out.print(a[j++]);
            } else {
                System.out.print(b[k++]);
            }
            System.out.print(i == n + m - 1 ? '\n' : ' ');
        }
    }
}
