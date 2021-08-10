import java.util.*;

class solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] st = new int[1000];
        int size = 0;
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            String s = in.next();
            if (s.equals("PUSH")) {
                int x = in.nextInt();
                st[size++] = x;
            } else if (s.equals("TOP")) {
                if (size == 0) {
                    System.out.println("Empty");
                } else {
                    System.out.println(st[size - 1]);
                }
            } else if (s.equals("POP")) {
                if (size == 0) {
                    System.out.println("Cannot pop");
                } else {
                    size--;
                }
            } else {
                System.out.println(size);
            }
        }
    }
}
