#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = b * b - 4 * a * c;
    if (d < 0) {
        printf("None\n");
    } else if (d == 0) {
        printf("%.3lf\n", -b / (2.0 * a));
    } else {
        double x = (-b - sqrt(d)) / (2.0 * a);
        double y = (-b + sqrt(d)) / (2.0 * a);
        if (x < y) {
            printf("%.3lf %.3lf\n", x, y);
        } else {
            printf("%.3lf %.3lf\n", y, x);
        }
    }
    return 0;
}
