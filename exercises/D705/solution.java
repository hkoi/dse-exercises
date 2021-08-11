import java.util.*;

class D705 {
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
        int y = in.nextInt();
        if (y == 1) {
            System.out.println(b[h]);
            System.out.println(-1);
            return;
        }
        int p = h;
        for (int i = 1; i < y - 1; i++) {
            p = b[p];
        }
        System.out.println(h);
        System.out.println(p+ " " + a[p] + " " + b[b[p]]);
    }
}
