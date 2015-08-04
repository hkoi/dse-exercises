#include <stdio.h>
long long barcode[100];
double price[100];
int main() {
    int n, m, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld %lf", &barcode[i], &price[i]);
    }
    double sum = 0.0;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        long long k;
        scanf("%lld", &k);
        for (j = 0; j < n; j++) {
            if (barcode[j] == k) {
                sum += price[j];
            }
        }
    }
    printf("%.1lf\n", sum);
    return 0;
}
