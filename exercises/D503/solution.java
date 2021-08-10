import java.util.*;
import java.io.FileWriter;
import java.io.IOException;

class D503 {
    public static void main(String[] args) {
        try {
            FileWriter fout = new FileWriter("chart.txt");
            Scanner in = new Scanner(System.in);
            int []a = new int[6];
            for (int i = 0; i < 6; i++) {
                a[i] = in.nextInt();
            }
            fout.write("+-------------------------+\n");
            for (int i = 10; i >= 1; i--) {
                fout.write("| ");
                for (int j = 0; j < 6; j++) {
                    if (a[j] >= i) {
                        fout.write("### ");
                    } else {
                        fout.write("    ");
                    }
                }
                fout.write("|\n");
            }
            fout.write("+-------------------------+\n");
            fout.close();
        } catch (IOException e) {
            System.out.println("File IO exception");
        }
        
    }
}
