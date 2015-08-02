#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int m = n / 2;
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= m + i; j++) {
            if (j == m - i || j == m + i) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = m - 1; i >= 0; i--) {
        for (j = 0; j <= m + i; j++) {
            if (j == m - i || j == m + i) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
