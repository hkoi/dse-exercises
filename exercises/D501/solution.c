#include <stdio.h>
int main() {
    FILE* fin = fopen("account.txt", "r");
    int balance = 0, n, x, i;
    fscanf(fin, "%d", &n);
    for (i = 0; i < n; i++) {
        fscanf(fin, "%d", &x);
        balance += x;
    }
    printf("%d\n", balance);
    return 0;
}
