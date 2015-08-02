#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a = n, b = m;
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    printf("%d\n", a);
    printf("%d\n", n * m / a);
    return 0;
}
