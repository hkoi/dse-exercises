#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long a = round(sqrt(n));
    long long b = floor(sqrt(n * 2));
    int square = a * a == n;
    int triangular = b * (b + 1) / 2 == n;
    if (square && triangular) {
        printf("Both\n");
    } else if (square) {
        printf("Square\n");
    } else if (triangular) {
        printf("Triangular\n");
    } else {
        printf("Neither\n");
    }
    return 0;
}
