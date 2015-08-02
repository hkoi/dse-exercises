#include <stdio.h>
char a[256], b[256], c[256], d[256], e[256];
int main() {
    gets(a);
    gets(b);
    gets(c);
    gets(d);
    gets(e);
    printf("%s and %s both study in %s.\n", a, b, e);
    printf("They hate each other and they argued in the %s.\n", d);
    printf("Strangely, after that they ate %s together.\n", c);
    return 0;
}
