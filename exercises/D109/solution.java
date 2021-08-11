import java.util.*;

class D109 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        while (n >= 1000) {
            System.out.println(1000);
            n -= 1000;
        }
        while (n >= 500) {
            System.out.println(500);
            n -= 500;
        } 
        while (n >= 100) {
            System.out.println(100);
            n -= 100;
        }
        while (n >= 50) {
            System.out.println(50);
            n -= 50;
        }
        while (n >= 20) {
            System.out.println(20);
            n -= 20;
        }
        while (n >= 10) {
            System.out.println(10);
            n -= 10;
        }
    }
}
