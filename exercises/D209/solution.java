import java.util.*;

public class D209 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t1 = in.nextInt();
        boolean ok = true;
        if (t1 <= 100 || t1 >= 50000)
        ok = false;
        for (int i = 2; i <= n; i++) {
            int t2 = in.nextInt();
            if (t2 <= 100 || t2 >= 50000 || t1 >= t2) {
                ok = false;
            }
            t1 = t2;
        }
        if (ok) {
            System.out.println("Valid");
        }
        else {
            System.out.println("Invalid");
        }
    }
}
