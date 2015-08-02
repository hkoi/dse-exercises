#include <stdio.h>
#include <string.h>
char s[10];
int main() {
    scanf("%s", s);
    int len = strlen(s);
    int sum;
    if (len == 8) {
        sum = 9 * (s[0] - 'A' + 10) + 8 * (s[1] - 'A' + 10);
    } else {
        sum = 9 * 36 + 8 * (s[0] - 'A' + 10);
    }
    sum += 7 * (s[len - 6] - '0');
    sum += 6 * (s[len - 5] - '0');
    sum += 5 * (s[len - 4] - '0');
    sum += 4 * (s[len - 3] - '0');
    sum += 3 * (s[len - 2] - '0');
    sum += 2 * (s[len - 1] - '0');
    printf("%s(%X)\n", s, 11 - sum % 11);
    return 0;
}
