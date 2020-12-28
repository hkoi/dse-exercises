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
// TODO: global variables can be declared here

bool validateImpl(int x, int y, char s[]) {
    int l = strlen(s);
    // TODO: implementation
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
        if (validateImpl(x, y, s))
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}
#endif
