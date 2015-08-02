#include <stdio.h>
char s[3][4];
int main() {
    scanf("%s %s %s", s[0], s[1], s[2]);
    int i, j;
    for (i = 1; i <= 2; i++) {
        char c = 'O';
        if (i == 2) {
            c = 'X';
        }
        for (j = 0; j <= 2; j++) {
            if (s[j][0] == c && s[j][1] == c && s[j][2] == c) {
                printf("%c wins\n", c);
                return 0;
            }
            if (s[0][j] == c && s[1][j] == c && s[2][j] == c) {
                printf("%c wins\n", c);
                return 0;
            }
        }
        if (s[0][0] == c && s[1][1] == c && s[2][2] == c ||
            s[0][2] == c && s[1][1] == c && s[2][0] == c) {
            printf("%c wins\n", c);
            return 0;
        }
    }
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            if (s[i][j] == '.') {
                printf("Not ended\n");
                return 0;
            }
        }
    }
    printf("Draw\n");
    return 0;
}
