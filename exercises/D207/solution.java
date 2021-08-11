import java.util.*;

class D207 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int a = n, b = m;
        while (b != 0) {
            int c = a % b;
            a = b;
            b = c;
        }
        System.out.println(a);
        System.out.println(n * m / a);
    }
}
