#include <stdio.h>
int a[1000001];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 0) {
            printf("%d\n", i);
            if (i > 1000) continue;
            for (int j = i * i; j <= n; j += i) {
                a[j] = 1;
            }
        }
    }
    return 0;
}
