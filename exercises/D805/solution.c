#include <stdio.h>
int a[101], b[101];
int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    int l1, r1, l2, r2;
    for (i = 1; i <= m; i++) {
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
        int j = l1, k = l2, t = l1, i;
        while (t <= r2) {
            // short circuit: k == m is checked first
            if (k > r2 || j <= r1 && a[j] < a[k]) {
                b[t++] = a[j++];
            } else {
                b[t++] = a[k++];
            }
        }
        for (j = l1; j <= r2; j++) {
            a[j] = b[j];
            printf("%d%c", a[j], j == r2 ? '\n' : ' ');
        }
    }
    return 0;
}
