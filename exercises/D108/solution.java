import java.util.*;

public class D108 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        char x = in.next().charAt(0);
        int b = in.nextInt();
        char y = in.next().charAt(0);
        int c = in.nextInt();
        int ans = 0;
        if (x == '+' && y == '+') ans = a + b + c;
        if (x == '+' && y == '-') ans = a + b - c;
        if (x == '+' && y == '*') ans = a + b * c;
        if (x == '-' && y == '+') ans = a - b + c;
        if (x == '-' && y == '-') ans = a - b - c;
        if (x == '-' && y == '*') ans = a - b * c;
        if (x == '*' && y == '+') ans = a * b + c;
        if (x == '*' && y == '-') ans = a * b - c;
        if (x == '*' && y == '*') ans = a * b * c;
        System.out.println(ans);
    }
}
