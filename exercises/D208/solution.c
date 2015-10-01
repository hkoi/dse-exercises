#include <stdio.h>
int main() {
    int n, x, i;
    scanf("%d", &n);
    int a = -2147483648, b = -2147483648;
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x >= a) {
            b = a;
            a = x;
        } else if (x > b) {
            b = x;
        }
    }
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
