import java.util.*;

class D802 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a = new int[2000];
        int n = in.nextInt();
        int d = in.nextInt();
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int ans = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
              if (d == 0 && a[j] > a[j + 1] ||
                  d == 1 && a[j] < a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                ans++;
              }
            }
          }
          System.out.println(ans);
          for (int i = 0; i < n - 1; i++) {
            System.out.print(a[i] + " ");
          }
          System.out.println(a[n - 1]);
    }
}
