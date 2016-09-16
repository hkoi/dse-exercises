#include <stdio.h>
int a[101];
int main() {
    int n, i, j, p, t;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    p = a[n];
    i = 1;
    for (j = 1; j <= n - 1; j++) {
        if (a[j] <= p) {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
            i++;
        }
    }
    t = a[i];
    a[i] = a[n];
    a[n] = t;
    for (i = 1; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n]);
    return 0;
}
