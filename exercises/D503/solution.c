#include <stdio.h>
int a[6];
int main() {
    scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    FILE* fout = fopen("chart.txt", "w");
    fprintf(fout, "+-------------------------+\n");
    int i, j;
    for (i = 10; i >= 1; i--) {
        fprintf(fout, "| ");
        for (j = 0; j < 6; j++) {
            if (a[j] >= i) {
                fprintf(fout, "### ");
            } else {
                fprintf(fout, "    ");
            }
        }
        fprintf(fout, "|\n");
    }
    fprintf(fout, "+-------------------------+\n");
    fclose(fout);
    return 0;
}
