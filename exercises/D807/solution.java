import java.util.*;

class D807 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[101];
        for (int i = 1; i <= n; i++) {
            a[i] = in.nextInt();
        }
        int t, p = a[n], i = 1;
        for (int j = 1; j <= n - 1; j++) {
            if (a[j] <= p) {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
                i++;
            }
        }
        t = a[i];
        a[i] = a[n];
        a[n] = t;
        for (i = 1; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println(a[n]);
    }
}
