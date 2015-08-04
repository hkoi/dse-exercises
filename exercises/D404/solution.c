#include <stdio.h>
double fare[101][101];
int main() {
    int n, m, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%lf", &fare[i][j]);
        }
    }
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        int x, y;
        char c;
        scanf("%d %d %c", &x, &y, &c);
        if ((c == 'A') != (x < y)) {
            int t = x;
            x = y;
            y = t;
        }
        printf("%.1lf\n", fare[x][y]);
    }
    return 0;
}
