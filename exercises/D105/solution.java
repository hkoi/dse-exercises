import java.util.*;

class D105 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int y1 = in.nextInt();
        int m1 = in.nextInt();
        int d1 = in.nextInt();
        int y2 = in.nextInt();
        int m2 = in.nextInt();
        int d2 = in.nextInt();
        int a = 10000 * y1 + 100 * m1 + d1;
        int b = 10000 * y2 + 100 * m2 + d2;
        if (a < b) {
            System.out.println("Before");
        } else if (a == b) {
            System.out.println("Same");
        } else {
            System.out.println("After");
        }
    }
}
