import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;

class D501 {
    public static void main(String[] args) {
        try {
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
        } catch (FileNotFoundException e) {
            System.out.println("File not found");
        }
        
    }
}
