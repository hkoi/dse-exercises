#include <stdio.h>
int st[1000];
char s[10];
int main() {
    int n, x, i;
    int size = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", s);
        if (strcmp(s, "PUSH") == 0) {
            scanf("%d", &x);
            st[size++] = x;
        } else if (strcmp(s, "TOP") == 0) {
            if (size == 0) {
                printf("Empty\n");
            } else {
                printf("%d\n", st[size - 1]);
            }
        } else if (strcmp(s, "POP") == 0) {
            if (size == 0) {
                printf("Cannot pop\n");
            } else {
                size--;
            }
        } else {
            printf("%d\n", size);
        }
    }
    return 0;
}
