import java.util.*;

class D107 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        long a = Math.round(Math.sqrt(n));
        long b = (long)Math.floor(Math.sqrt(n * 2));
        boolean square = a * a == n;
        boolean triangular = b * (b + 1) / 2 == n;
        if (square && triangular) {
            System.out.println("Both");
        } else if (square) {
            System.out.println("Square");
        } else if (triangular) {
            System.out.println("Triangular");
        } else {
            System.out.println("Neither");
        }
    }
}
