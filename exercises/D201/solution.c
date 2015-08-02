#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", a);
    return 0;
}
