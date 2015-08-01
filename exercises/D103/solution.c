#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double r = 3.141592653 * c / 180.0;
    printf("%.3lf\n", 0.5 * a * b * sin(r));
    return 0;
}
