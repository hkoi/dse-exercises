import java.util.*;

public class D401 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        boolean a[] = new boolean[1000001];
        int n = in.nextInt();
        for (int i = 2; i <= n; i++) {
            a[i] = false;
        }
        for (int i = 2; i <= n; i++) {
            if (!a[i]) {
                System.out.println(i);
                if (i > 1000) continue;
                for (int j = i * i; j <= n; j += i) {
                    a[j] = true;
                }
            }
        }
    }
}
