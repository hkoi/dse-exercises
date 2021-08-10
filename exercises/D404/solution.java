import java.util.*;

class D404 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        double [][]fare = new double[101][101];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                fare[i][j] = in.nextDouble();
            }
        }
        int m = in.nextInt();
        for (int i = 1; i <= m; i++) {
            int x = in.nextInt();
            int y = in.nextInt();
            char c = in.next().charAt(0);
            if ((c == 'A') != (x < y)) {
                int t = x;
                x = y;
                y = t;
            }
            System.out.printf("%.1f\n", fare[x][y]);
        }
    }
}
