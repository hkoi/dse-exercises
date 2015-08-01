#include <stdio.h>
#include <math.h>
int main() {
	int n, i;
	scanf("%d", &n);
	int m = sqrt(n);
	int first = 1;
	printf("%d=", n);
	for (i = 2; i <= m; i++) {
		while (n % i == 0) {
			if (first == 0) {
				printf("*");
			}
			printf("%d", i);
			n /= i;
			first = 0;
		}
	}
	if (n > 1) {
		if (first == 0) {
			printf("*");
		}
		printf("%d", n);
	}
	printf("\n");
	return 0;
}
