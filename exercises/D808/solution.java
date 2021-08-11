import java.util.*;

class D808 {
    static int[] a = new int[101];
    static int ans;
    static void sort(int l, int r) {
        ans += r - l + 1;
        if (l >= r) return ;
        int t, i, p;
        p = a[r];
        i = l;
        for (int j = l; j <= r - 1; j++) {
            if (a[j] <= p) {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
                i++;
            }
        }
        t = a[i];
        a[i] = a[r];
        a[r] = t;
        sort(l, i - 1);
        sort(i + 1, r);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 1; i <= n; i++) {
            a[i] = in.nextInt();
        }
        sort(1, n);
        for (int i = 1; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println(a[n]);
        System.out.println(ans);
    }
}
