import java.util.*;

class D406 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int []a = new int[20];
        int []b = new int[20];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int c = 0;
        for (int i = 0; i < n; i++) {
            boolean found = false;
            for (int j = 0; j < i; j++) {
                if (a[j] == a[i])
                    found = true;
            }
            if (!found) {
                b[c] = a[i];
                c++;
            }
        }
        System.out.println(c);
        for (int i = 0; i < c - 1; i++)
            System.out.print(b[i] + " ");
        System.out.println(b[c - 1]);
    }
}
