#include <stdio.h>
#include <math.h>
int main() {
    char dummy;
    double fare;
    scanf("%c %lf", &dummy, &fare);
    int ten_cents = round(fare * 10);
    int ten_cents_halved;
    if (ten_cents % 2 == 0) {
        ten_cents_halved = ten_cents / 2;
    } else {
        ten_cents_halved = ten_cents / 2 + 1;
    }
    printf("$%.1f\n", ten_cents_halved / 10.0);
    return 0;
}
