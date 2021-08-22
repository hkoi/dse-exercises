import java.util.*;

class D110 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String k1 = in.nextLine();
        String k2 = in.nextLine();
        char c1 = k1.charAt(0);
        char r1 = k1.charAt(1);
        char c2 = k2.charAt(0);
        char r2 = k2.charAt(1);
        int c = Math.abs(c1 - c2);
        int r = Math.abs(r1 - r2); 
        if (c > r) {
            System.out.println(c);
        } else {
            System.out.println(r);
        }
    }
}
