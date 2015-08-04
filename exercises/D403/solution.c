#include <stdio.h>
#include <string.h>
int freqa[26], freqb[26];
char s[11];
int main() {
    scanf("%s", s);
    int len = strlen(s);
    int n, i, j;
    for (i = 0; i < len; i++) {
        freqa[s[i] - 'A']++;
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 26; j++) {
            freqb[j] = 0;
        }
        scanf("%s", s);
        len = strlen(s);
        for (j = 0; j < len; j++) {
            freqb[s[j] - 'A']++;
        }
        int ok = 1;
        for (j = 0; j < 26; j++) {
            if (freqb[j] > freqa[j]) {
                ok = 0;
            }
        }
        if (ok) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
