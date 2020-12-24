#include <stdio.h>
#include <stdbool.h>

int a[20], b[20];
int n, i, j, c;
bool found;
int main(){
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    c = 0;
    for (i = 0; i < n; i++) {
        found = false;
        for (j = 0; j < i; j++) {
            if (a[j] == a[i])
                found = true;
        }
        if (!found) {
            b[c] = a[i];
            c++;
        }
    }
    printf("%d\n", c);
    for (i = 0; i < c - 1; i++)
        printf("%d ", b[i]);
    printf("%d\n", b[c - 1]);
    return 0;
}
