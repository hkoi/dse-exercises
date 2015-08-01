#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int b = a / 10000000;
    if (b == 2) {
        printf("Fixed\n");
    } else if (b == 3) {
        printf("Fixed\n");
    } else {
        printf("Mobile\n");
    }
    return 0;
}
