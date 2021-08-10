import java.util.*;

public class D307 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String[] s = new String[3];
        for (int i = 0; i < 3; i++) {
            s[i] = in.nextLine();
        }
        for (int i = 1; i <= 2; i++) {
            char c = 'O';
            if (i == 2) {
                c = 'X';
            }
            for (int j = 0; j <= 2; j++) {
                if (s[j].charAt(0) == c && s[j].charAt(1) == c && s[j].charAt(2) == c) {
                    System.out.println(c + " wins");
                    return;
                }
                if (s[0].charAt(j) == c && s[1].charAt(j) == c && s[2].charAt(j) == c) {
                    System.out.println(c + " wins");
                    return;
                }
            }
            if (s[0].charAt(0) == c && s[1].charAt(1) == c && s[2].charAt(2) == c ||
                s[0].charAt(2) == c && s[1].charAt(1) == c && s[2].charAt(0) == c) {
                System.out.println(c + " wins");
                return;
            }
        }
        for (int i = 0; i <= 2; i++) {
            for (int j = 0; j <= 2; j++) {
                if (s[i].charAt(j) == '.') {
                    System.out.println("Not ended");
                    return;
                }
            }
        }
        System.out.println("Draw");
    }
}
