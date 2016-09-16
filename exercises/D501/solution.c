#include <stdio.h>
char s[50];
int main() {
    FILE* fin = fopen("weather.txt", "r");
    int max = 0, min = 100;
    while (fgets(s, 50, fin)) {
        int x;
        sscanf(s, "%*32c%d", &x);
        if (x > max) max = x;
        if (x < min) min = x;
    }
    fclose(fin);
    printf("%d %d\n", min, max);
    return 0;
}
