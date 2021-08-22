import java.util.*;

class D703 {
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
        int p = h;
        while (p != 0) {
            System.out.println(a[p]);
            p = b[p];
        }
        System.out.println("End");
    }
}
