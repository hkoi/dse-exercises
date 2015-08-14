#include <stdio.h>
int q[1000];
char s[10];
int main() {
    int n, x, i;
    int qs = 0, qe = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", s);
        if (strcmp(s, "PUSH") == 0) {
            scanf("%d", &x);
            q[qe++] = x;
        } else if (strcmp(s, "FRONT") == 0) {
            if (qs == qe) {
                printf("Empty\n");
            } else {
                printf("%d\n", q[qs]);
            }
        } else if (strcmp(s, "POP") == 0) {
            if (qs == qe) {
                printf("Cannot pop\n");
            } else {
                qs++;
            }
        } else {
            printf("%d\n", qe - qs);
        }
    }
    return 0;
}
