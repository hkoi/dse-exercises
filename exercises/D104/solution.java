import java.util.*;

class D104 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        int d = b * b - 4 * a * c;
        if (d < 0) {
            System.out.println("None");
        } else if (d == 0) {
            System.out.printf("%.3f\n", -b / (2.0 * a));
        } else {
            double x = (-b - Math.sqrt(d)) / (2.0 * a);
            double y = (-b + Math.sqrt(d)) / (2.0 * a);
            if (x < y) {
                System.out.printf("%.3f %.3f\n", x, y);
            } else {
                System.out.printf("%.3f %.3f\n", y, x);
            }
        }
    }
}
