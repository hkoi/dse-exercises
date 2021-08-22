import java.util.*;

class D805 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a = new int[101];
        int[] b = new int[101];
        int n = in.nextInt();
        int m = in.nextInt();
        for (int i = 1; i <= n; i++) {
            a[i] = in.nextInt();
        }
        for (int i = 1; i <= m; i++) {
            int l1 = in.nextInt();
            int r1 = in.nextInt();
            int l2 = in.nextInt();
            int r2 = in.nextInt();
            int j = l1, k = l2, t = l1;
            while (t <= r2) {
                // short circuit: k == m is checked first
                if (k > r2 || j <= r1 && a[j] < a[k]) {
                    b[t++] = a[j++];
                } else {
                    b[t++] = a[k++];
                }
            }
            for (j = l1; j <= r2; j++) {
                a[j] = b[j];
                System.out.print(a[j] + (j == r2 ? "\n" : " "));
            }
        }
    }
}
