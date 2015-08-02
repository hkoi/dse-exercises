#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n != 1) {
        printf("%d\n", n);
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
    }
    printf("1\n");
    return 0;
}
