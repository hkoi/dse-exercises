#include <stdio.h>
int a[101];
int ans;
void sort(int l, int r) {
    ans += r - l + 1;
    if (l >= r) {
        return;
    }
    int t, i, j, p;
    p = a[r];
    i = l;
    for (j = l; j <= r - 1; j++) {
        if (a[j] <= p) {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
            i++;
        }
    }
    t = a[i];
    a[i] = a[r];
    a[r] = t;
    sort(l, i - 1);
    sort(i + 1, r);
}
int main() {
    int n, i, j, p, t;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    sort(1, n);
    for (i = 1; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n]);
    printf("%d\n", ans);
    return 0;
}
