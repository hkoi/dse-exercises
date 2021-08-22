import java.util.*;

class D403 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int[] freqa = new int[26];
        int[] freqb = new int[26];
        int len = s.length();
        for (int i = 0; i < len; i++) {
            freqa[s.charAt(i) - 'A']++;
        }
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                freqb[j] = 0;
            }
            s = in.next();
            len = s.length();
            for (int j = 0; j < len; j++) {
                freqb[s.charAt(j) - 'A']++;
            }
            boolean ok = true;
            for (int j = 0; j < 26; j++) {
                if (freqb[j] > freqa[j]) {
                    ok = false;
                }
            }
            if (ok) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}
