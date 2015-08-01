#include <stdio.h>
#include <math.h>
int main() {
    char dummy;
    double fare;
    scanf("%c %lf", &dummy, &fare);
    int tencents = round(fare * 10);
    int tencentshalved;
    if (tencents % 2 == 0) {
        tencentshalved = tencents / 2;
    } else {
        tencentshalved = tencents / 2 + 1;
    }
    printf("$%.1f\n", tencentshalved / 10.0);
    return 0;
}
