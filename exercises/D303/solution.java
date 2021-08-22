import java.util.*;

class D303 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int len = s.length();
        StringBuilder t = new StringBuilder(s);
        for (int i = 0; i < len / 2; i++) {
            char c = t.charAt(i);
            t.setCharAt(i, t.charAt(len - i - 1));
            t.setCharAt(len - i - 1, c);
        }
        System.out.println(t);
        String str = t.toString();
        if (s.equals(str)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
