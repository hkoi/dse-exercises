import java.util.*;

class D111 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double w = in.nextDouble();
        double h = in.nextDouble();
        double bmi = w / (h * h);
        System.out.printf("%.3f\n", bmi);
        if (bmi < 18.5) {
            System.out.println("Underweight");
        }
        else if (bmi < 23.0) {
            System.out.println("Normal");
        }
        else if (bmi < 25.0) {
            System.out.println("Overweight");
        }
        else {
            System.out.println("Obese");
        }
    }
}
