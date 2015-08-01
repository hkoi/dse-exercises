#include <stdio.h>
#include <math.h>
int main() {
	int n, i;
	scanf("%d", &n);
	int m = sqrt(n);
	for (i = 1; i <= m; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
		}
	}
	if (m * m == n) {
		m--;
	}
	for (i = m; i >= 1; i--) {
		if (n % i == 0) {
			printf("%d\n", n / i);
		}
	}
	return 0;
}
