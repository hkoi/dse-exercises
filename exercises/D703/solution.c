#include <stdio.h>
int a[1001], b[1001];
char s[10];
int main() {
    int n, h, m, i;
    scanf("%d %d", &n, &h);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++) {
        scanf("%d", &b[i]);
    }
    scanf("%d", &m);
    int p = h;
    for (i = 0; i < m; i++) {
        scanf("%s", s);
        if (strcmp(s, "QUERY") == 0) {
            if (p == 0) {
                printf("End\n");
            } else {
                printf("%d\n", a[p]);
            }
        } else if (strcmp(s, "NEXT") == 0) {
            if (p == 0) {
                printf("Cannot next\n");
            }
            p = b[p];
        } else if (strcmp(s, "HEAD") == 0) {
            p = h;
        }
    }
    return 0;
}
