#include <stdio.h>
int q[10001];
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
            if (qe == 10001)
                qe = 0;
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
                if (qs == 10001)
                    qs = 0;
            }
        } else {
            printf("%d\n", (10001 + qe - qs) % 10001);
        }
    }
    return 0;
}
