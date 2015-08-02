#include <stdio.h>
#include <string.h>
char s[101], t[101];
int main() {
    scanf("%s %s", s, t);
    int len1 = strlen(s);
    int len2 = strlen(t);
    int i;
    for (i = 0; i < len1; i++) {
        if (s[i] >= 'a') {
            s[i] -= 32;
        }
    }
    for (i = 0; i < len2; i++) {
        if (t[i] >= 'a') {
            t[i] -= 32;
        }
    }
    int a = strcmp(s, t);
    if (a < 0) {
        printf("Smaller\n");
    } else if (a == 0) {
        printf("Equal\n");
    } else {
        printf("Greater\n");
    }
    return 0;
}
