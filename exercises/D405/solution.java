import java.util.*;

class D405 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int h = in.nextInt();
        int w = in.nextInt();
        char[][] s = new char[21][21];
        for (int i = 0; i < h; i++) {
            String line = in.next();
            for (int j = 0; j < w; j++) {
                s[i][j] = line.charAt(j);
            }
        }
        s[h][w - 1] = 'S';
        for (int i = h - 1; i >= 0; i--) {
            for (int j = w - 1; j >= 0; j--) {
                if (s[i][j] == '#') {
                    continue;
                }
                if (s[i + 1][j] == 'S' || s[i + 1][j] == 'E') {
                    s[i][j] = 'S';
                } else if (s[i][j + 1] == 'S' || s[i][j + 1] == 'E') {
                    s[i][j] = 'E';
                }
            }
        }
        int row = 0, col = 0;
        for (int i = 0; i < h + w - 2; i++) {
            System.out.print(s[row][col]);
            if (s[row][col] == 'S') {
                row++;
            } else {
                col++;
            }
        }
        System.out.println();
    }
}
