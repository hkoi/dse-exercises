#include <stdio.h>
int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < 10; i++) {
		for (j = 1; j <= 10; j++) {
			int k = i * 10 + j;
			if (i == n || j == n || k % n == 0) {
				printf("Clap");
			} else {
				printf("%d", k);
			}
			if (j < 10) {
				printf(" ");
			} else {
				printf("\n");
			}
		}
	}
	return 0;
}
