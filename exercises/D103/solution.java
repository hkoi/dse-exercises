import java.util.*;

public class D103 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = in.nextDouble();
        double r = 3.141592653 * c / 180.0;
        System.out.printf("%.3f\n", 0.5 * a * b * Math.sin(r));
    }
}
