#include <stdio.h>
int a[100000], b[100000];
int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int j = 0, k = 0;
    for (i = 0; i < n + m; i++) {
        // short circuit: k == m is checked first
        if (k == m || j != n && a[j] < b[k]) {
            printf("%d", a[j++]);
        } else {
            printf("%d", b[k++]);
        }
        printf("%c", i == n + m - 1 ? '\n' : ' ');
    }
    return 0;
}
