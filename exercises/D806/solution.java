import java.util.*;

class D806 {
    static void recur(int l, int r) {
        if (l == r) return;
        int mid = (l + r) / 2;
        recur(l, mid);
        recur(mid + 1, r);
        System.out.println(l + " " + mid + " " + (mid + 1) + " " + r);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        recur(1, n);
    }
}
