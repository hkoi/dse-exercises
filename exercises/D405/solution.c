#include <stdio.h>
char s[21][21];
int main() {
    int h, w, i, j;
    scanf("%d %d", &h, &w);
    for (i = 0; i < h; i++) {
        scanf("%s", s[i]);
    }
    s[h][w - 1] = 'S';
    for (i = h - 1; i >= 0; i--) {
        for (j = w - 1; j >= 0; j--) {
            if (s[i][j] == '#') {
                continue;
            }
            if (s[i + 1][j] == 'S' || s[i + 1][j] == 'E') {
                s[i][j] = 'S';
            } else if (s[i][j + 1] == 'S' || s[i][j + 1] == 'E') {
                s[i][j] = 'E';
            }
        }
    }
    int row = 0, col = 0;
    for (i = 0; i < h + w - 2; i++) {
        printf("%c", s[row][col]);
        if (s[row][col] == 'S') {
            row++;
        } else {
            col++;
        }
    }
    printf("\n");
    return 0; 
}
