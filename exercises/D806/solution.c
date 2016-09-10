#include <stdio.h>
void recur(int l, int r) {
    if (l == r) return ;
    int mid = (l + r) / 2;
    recur(l, mid);
    recur(mid + 1, r);
    printf("%d %d %d %d\n", l, mid, mid + 1, r);
}
int main() {
    int n;
    scanf("%d", &n);
    recur(1, n);
    return 0;
}
