import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

class D501 {
    public static void main(String[] args) throws FileNotFoundException {
        File fin = new File("account.txt");
        Scanner in = new Scanner(fin);
        int n = in.nextInt();
        int balance = 0;
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            balance += x;
        }
        in.close();
        System.out.println(balance);
    }
}
