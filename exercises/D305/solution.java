import java.util.*;

class D305 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int len = s.length(), sum;
        if (len == 8) {
            sum = 9 * (s.charAt(0) - 'A' + 10) + 8 * (s.charAt(1) - 'A' + 10);
        } else {
            sum = 9 * 36 + 8 * (s.charAt(0) - 'A' + 10);
        }
        sum += 6 * (s.charAt(len - 5) - '0');
        sum += 5 * (s.charAt(len - 4) - '0');
        sum += 7 * (s.charAt(len - 6) - '0');
        sum += 4 * (s.charAt(len - 3) - '0');
        sum += 3 * (s.charAt(len - 2) - '0');
        sum += 2 * (s.charAt(len - 1) - '0');
        if (sum % 11 == 0) {
            System.out.println(s + "(0)");
        } else if (sum % 11 == 1) {
            System.out.println(s + "(A)");
        } else {
            System.out.println(s + "(" + (11 - sum % 11) + ")");
        }
    }
}
