#include <stdio.h>
int a[50000];
int main() {
    int n, d, i, j, t, ans = 0;
    scanf("%d %d", &n, &d);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++) {
      for (j = 0; j < n - i; j++) {
        if (d == 0 && a[j] > a[j + 1] ||
            d == 1 && a[j] < a[j + 1]) {
          t = a[j];
          a[j] = a[j + 1];
          a[j + 1] = t;
          ans++;
        }
      }
    }
    printf("%d\n", ans);
    for (i = 0; i < n - 1; i++) {
      printf("%d ", a[i]);
    }
    printf("%d\n", a[n - 1]);
    return 0;
}

