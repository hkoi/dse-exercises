#include <stdio.h>
int a[100000];
int main() {
    int n, q, i;
    scanf("%d %d", &n, &q);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < q; i++) {
        int x, l = 0, r = n - 1;
        int found = 0;
        scanf("%d", &x);
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == x) {
                found = 1;
                break;
            } else if (a[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (found) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
