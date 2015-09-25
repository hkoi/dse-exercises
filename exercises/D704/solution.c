#include <stdio.h>
int a[1001], b[1001];
char s[13];
int main() {
    int m, size = 0, p = 0, h = 0, n = 1;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%s", s);
        if (strcmp(s, "QUERY") == 0) {
            if (a[p] == 0) {
                printf("End\n");
            } else {
                printf("%d\n", a[p]);
            }
        } else if (strcmp(s, "NEXT") == 0) {
            if (a[p] == 0) {
                printf("Cannot next\n");
                continue;
            }
            p = b[p];
        } else if (strcmp(s, "HEAD") == 0) {
            p = h;
        } else if (strcmp(s, "INSERTBEFORE") == 0) {
            int x;
            scanf("%d", &x);
            a[n] = a[p];
            b[n] = b[p];
            b[p] = n;
            n++;
            size++;
        } else if (strcmp(s, "INSERTAFTER") == 0) {
            int x;
            scanf("%d", &x);
            if (a[p] == 0) {
                printf("Cannot insert\n");
                continue;
            }
            a[n] = x;
            b[n] = b[p];
            b[p] = n;
            n++;
            size++;
        } else if (strcmp(s, "DELETE") == 0) {
            if (a[p] == 0) {
                printf("Cannot delete\n");
                continue;
            }
            if (h == p) {
                h = b[p];
            }
            a[p] = a[b[p]];
            b[p] = b[b[p]];
            size--;
        }
    }
    return 0;
}
