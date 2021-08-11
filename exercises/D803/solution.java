import java.util.*;

class D803 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a = new int[100];
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            int j;
            for (j = i - 1; j >= 0; j--) {
                if (x > a[j]) {
                    break;
                }
                a[j + 1] = a[j];
            }
            a[j + 1] = x;
            for (j = 0; j < i; j++) {
                System.out.print(a[j] + " ");
            }
            System.out.println(a[i]);
        }
    }
}
