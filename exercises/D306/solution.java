import java.util.*;

class D306 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int len = s.length();
        if (s.indexOf('@') == -1) {
            System.out.println("Invalid");
            return;
        }
        int at = s.indexOf('@');
        if (s.indexOf('.', at) == -1) {
            System.out.println("Invalid");
            return;
        }
        for (int i = 0; i < len - 1; i++) {
            if (s.charAt(i) == '.' && s.charAt(i + 1) == '.') {
                System.out.println("Invalid");
                return;
            }
        }
        if (s.charAt(0) == '.' || s.charAt(at - 1) == '.' || s.charAt(at + 1) == '.' || s.charAt(len - 1) == '.') {
            System.out.println("Invalid");
            return;
        }
        for (int i = 0; i < at; i++) {
            if (!(Character.isLetterOrDigit(s.charAt(i)) || s.charAt(i) == '.' || s.charAt(i) == '+')) {
                System.out.println("Invalid");
                return;
            }
        }
        for (int i = at + 1; i < len; i++) {
            if (!(Character.isLetterOrDigit(s.charAt(i)) || s.charAt(i) == '.' || s.charAt(i) == '-')) {
                System.out.println("Invalid");
                return;
            }
            if (i < len - 1 && (s.charAt(i) == '.' && s.charAt(i + 1) == '-' || s.charAt(i) == '-' && s.charAt(i + 1) == '.')) {
                System.out.println("Invalid");
                return;
            }
        }
        System.out.println("Valid");
    }
}
