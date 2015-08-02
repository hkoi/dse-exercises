#include <stdio.h>
int main() {
    int y1, m1, d1, y2, m2, d2;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);
    int a = 10000 * y1 + 100 * m1 + d1;
    int b = 10000 * y2 + 100 * m2 + d2;
    if (a < b) {
        printf("Before\n");
    } else if (a == b) {
        printf("Same\n");
    } else {
        printf("After\n");
    }
    return 0;
}
