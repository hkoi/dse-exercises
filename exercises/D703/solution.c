#include <stdio.h>
int a[10001], b[10001];
int main() {
    int n, h, m, i, p;
    scanf("%d %d", &n, &h);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++) {
        scanf("%d", &b[i]);
    }
    p = h;
    while (p != 0) {
        printf("%d\n", a[p]);
        p = b[p];
    }
    printf("End\n");
    return 0;
}
