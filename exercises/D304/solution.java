import java.util.*;

class D304 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int len = s.length(), count = 0;
        StringBuilder t = new StringBuilder();
        t.append("____________________", 0, len);
        while (count < len) {
            char c = in.nextLine().charAt(0);
            for (int i = 0; i < len; i++) {
                if (s.charAt(i) == c) {
                    t.setCharAt(i, c);
                    count++;
                }
            }
            System.out.println(t);
        }
    }
}
