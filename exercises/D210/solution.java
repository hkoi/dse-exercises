import java.util.*;

class D210 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int x = in.nextInt();
        int y = in.nextInt();
        int x2 = 0, y2 = 0, sum = 0;
        int x1 = x;
        int y1 = y;
        for (int i = 2; i <= n; i++) {
            x2 = in.nextInt();
            y2 = in.nextInt();
            sum += x1 * y2 - x2 * y1;
            x1 = x2;
            y1 = y2;
        }
        sum += x2 * y - x * y2;
        System.out.printf("%.1f\n", sum / 2.0);
    }
}
