#include <stdio.h>
#include <stdlib.h>
int main() {
    char c1, r1, c2, r2;
    scanf("%c%c", &c1, &r1);
    // note: the space is important
    scanf(" %c%c", &c2, &r2);
    int c = abs(c1 - c2);
    int r = abs(r1 - r2);
    printf("%d\n", c > r ? c : r);
    return 0;
}
