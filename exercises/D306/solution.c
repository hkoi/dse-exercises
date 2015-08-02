#include <stdio.h>
#include <string.h>
#include <ctype.h>
char s[51];
int main() {
    scanf("%s", s);
    int len = strlen(s);
    if (strchr(s, '@') == NULL) {
        printf("Invalid\n");
        return 0;
    }
    int at = strchr(s, '@') - s;
    if (strchr(s + at, '.') == NULL) {
        printf("Invalid\n");
        return 0;
    }
    int i;
    for (i = 0; i < len - 1; i++) {
        if (s[i] == '.' && s[i + 1] == '.') {
            printf("Invalid\n");
            return 0;
        }
    }
    if (s[0] == '.' || s[at - 1] == '.' || s[at + 1] == '.' || s[len - 1] == '.') {
        printf("Invalid\n");
        return 0;
    }
    for (i = 0; i < at; i++) {
        if (!(isalnum(s[i]) || s[i] == '.' || s[i] == '+')) {
            printf("Invalid\n");
            return 0;
        }
    }
    for (i = at + 1; i < len; i++) {
        if (!(isalnum(s[i]) || s[i] == '.' || s[i] == '-')) {
            printf("Invalid\n");
            return 0;
        }
        if (i < len - 1 && (s[i] == '.' && s[i + 1] == '-' || s[i] == '-' && s[i + 1] == '.')) {
            printf("Invalid\n");
            return 0;
        }
    }
    printf("Valid\n");
    return 0;
}
