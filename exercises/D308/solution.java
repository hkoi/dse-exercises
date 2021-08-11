import java.util.*;

class D308 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String t = in.nextLine();
        int len1 = s.length();
        int len2 = t.length();
        int a = 0, b = 0;
        for (int i = 0; i <= len1 - len2; i++) {
            if (s.substring(i, i + len2).equals(t)) {
                a++;
            }
        }
        for (int i = 0; i <= len1 - len2; i++) {
            if (s.substring(i, i + len2).equals(t)) {
                b++;
                i += len2 - 1;
            }
        }
        System.out.println(a);
        System.out.println(b);
    }
}
