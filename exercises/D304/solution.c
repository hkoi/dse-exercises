#include <stdio.h>
#include <string.h>
char s[21], t[21];
int main() {
    scanf("%s", s);
    int len = strlen(s);
    int count = 0;
    strncpy(t, "____________________", len);
    while (count < len) {
        char c;
        scanf(" %c", &c);
        int i;
        for (i = 0; i < len; i++) {
            if (s[i] == c) {
                t[i] = c;
                count++;
            }
        }
        printf("%s\n", t);
    }
    return 0;
}
