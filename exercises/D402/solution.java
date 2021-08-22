import java.util.*;

class D402 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long[] barcode = new long[n];
        double[] price = new double[n];
        for (int i = 0; i < n; i++) {
            barcode[i] = in.nextLong();
            price[i] = in.nextDouble();
        }
        double sum = 0;
        int m = in.nextInt();
        for (int i = 0; i < m; i++) {
            long k = in.nextLong();
            for (int j = 0; j < n; j++) {
                if (barcode[j] == k) {
                    sum += price[j];
                }
            }
        }
        System.out.printf("%.1f\n", sum);
    }
}
