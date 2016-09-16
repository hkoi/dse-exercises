#include <stdio.h>
int a[100];
int main() {
    int n, i, j, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        for (j = i - 1; j >= 0; j--) {
            if (x > a[j]) {
                break;
            }
            a[j + 1] = a[j];
        }
        a[j + 1] = x;
        for (j = 0; j < i; j++) {
            printf("%d ", a[j]);
        }
        printf("%d\n", a[i]);
    }
    return 0;
}
