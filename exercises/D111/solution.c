#include <stdio.h>
int main() {
    double w, h;
    scanf("%lf%lf", &w, &h);
    double bmi = w / (h * h);
    printf("%.3lf\n", bmi);
    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi < 23.0) {
        printf("Normal\n");
    }
    else if (bmi < 25.0) {
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }
    return 0;
}
