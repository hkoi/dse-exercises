import java.util.*;

public class D203 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 0; i < 10; i++) {
            for (int j = 1; j <= 10; j++) {
                int k = i * 10 + j;
                if (k / 10 == n || k % 10 == n || k % n == 0) {
                    System.out.print("Clap");
                } else {
                    System.out.print(k);
                }
                if (j < 10) {
                    System.out.print(" ");
                } else {
                    System.out.println();
                }
            }
        }
    }
}
