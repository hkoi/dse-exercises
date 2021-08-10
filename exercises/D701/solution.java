import java.util.*;

class D701 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q[] = new int[1000];
        int qs = 0, qe = 0;
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            String s = in.next();
            if (s.equals("PUSH")) {
                int x = in.nextInt();
                q[qe++] = x;
            } else if (s.equals("FRONT")) {
                if (qs == qe) {
                    System.out.println("Empty");
                } else {
                    System.out.println(q[qs]);
                }
            } else if (s.equals("POP")) {
                if (qs == qe) {
                    System.out.println("Cannot pop");
                } else {
                    qs++;
                }
            } else {
                System.out.println(qe - qs);
            }
        }
    }
}
