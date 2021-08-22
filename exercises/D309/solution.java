import java.util.*;

class D309 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String t = in.nextLine();
        s = s.toUpperCase();
        t = t.toUpperCase();
        int a = s.compareTo(t);
        if (a < 0) {
            System.out.println("Smaller");
        } else if (a == 0) {
            System.out.println("Equal");
        } else {
            System.out.println("Greater");
        }
    }
}
