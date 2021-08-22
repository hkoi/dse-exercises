import java.util.*;

class D801 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a = new int[100000];
        int n = in.nextInt();
        int q = in.nextInt();
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        for (int i = 0; i < q; i++) {
            int x, l = 0, r = n - 1;
            boolean found = false;
            x = in.nextInt();
            while (l <= r) {
                int mid = (l + r) / 2;
                if (a[mid] == x) {
                    found = true;
                    break;
                } else if (a[mid] < x) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            if (found) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}
