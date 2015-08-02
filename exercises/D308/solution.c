#include <stdio.h>
#include <string.h>
char s[51], t[51];
int main() {
    scanf("%s %s", s, t);
    int len1 = strlen(s);
    int len2 = strlen(t);
    int i, a = 0, b = 0;
    for (i = 0; i <= len1 - len2; i++) {
        if (strncmp(s + i, t, len2) == 0) {
            a++;
        }
    }
    for (i = 0; i <= len1 - len2; i++) {
        if (strncmp(s + i, t, len2) == 0) {
            b++;
            i += len2 - 1;
        }
    }
    printf("%d\n%d\n", a, b);
    return 0;
}
