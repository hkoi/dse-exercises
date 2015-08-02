#include <stdio.h>
#include <string.h>
char s[51], t[51];
int main() {
    scanf("%s", s);
    int len = strlen(s);
    strcpy(t, s);
    int i;
    for (i = 0; i < len / 2; i++) {
        char c = t[i];
        t[i] = t[len - i - 1];
        t[len - i - 1] = c;
    }
    printf("%s\n", t);
    if (strcmp(s, t) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
