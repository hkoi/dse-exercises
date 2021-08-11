import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;

class D502 {
    public static void main(String[] args) {
        try {
            File fin = new File("weather.txt");
            Scanner in = new Scanner(fin);
            int max = 0, min = 100;
            while (in.hasNextLine()) {
                String line = in.nextLine();
                Scanner tempParser = new Scanner(line.substring(32));
                int x = tempParser.nextInt();
                max = Math.max(max, x);
                min = Math.min(min, x);
            }
            System.out.println(min + " " + max);
        } catch (FileNotFoundException e) {
            System.out.println("File not found");
        }
        
    }
}