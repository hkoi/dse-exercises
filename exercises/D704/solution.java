import java.util.*;

class D704 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a = new int[10001];
        int[] b = new int[10001];
        int n = in.nextInt();
        int h = in.nextInt();
        for (int i = 1; i <= n; i++) {
            a[i] = in.nextInt();
        }
        for (int i = 1; i <= n; i++) {
            b[i] = in.nextInt();
        }
        int x = in.nextInt();
        int y = in.nextInt();
        if (y == 0) {
            System.out.println(n + 1);
            System.out.println(x + " " + h);
            System.out.println(-1);
            return;
        }
        int p = h;
        for (int i = 1; i < y; i++) {
            p = b[p];
        }
        System.out.println(h);
        System.out.println(x + " " + b[p]);
        System.out.println(p + " " + a[p] + " " + (n + 1));
    }
}
