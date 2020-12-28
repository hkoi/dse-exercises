#ifndef __cplusplus
#include <stdbool.h>
#else
extern "C" {
#endif
    bool validate(int x, int y, char s[]);
#ifdef __cplusplus
}
#endif

#include <string.h>

bool validateImpl(int x, int y, char s[]) {
    int l = strlen(s);
    if (l > 6) {
        return false;
    }
    if (l == 1 && s[0] == '0') {
        if (x <= 0 && 0 <= y) {
            return true;
        } else {
            return false;
        }
    }
    if (s[0] < '1' || s[0] > '9') {
        return false;
    }
    for (int i = 1; i < l; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    int n = 0;
    for (int i = 0; i < l; i++) {
        n = n * 10 + s[i] - '0';
    }
    if (x <= n && n <= y) {
        return true;
    } else {
        return false;
    }
}

bool validate(int x, int y, char s[]) {
    return validateImpl(x, y, s);
}

#ifndef ONLINE_JUDGE
#include <stdio.h>

int x, y;
char s[101];

int main() {
    while (true) {
        printf("Enter x and y: ");
        scanf("%d %d", &x, &y);
        printf("Enter string s: ");
        scanf("%s", s);
        printf("Your function validate() returned: ");
        if (validate(x, y, s))
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}
#endif
