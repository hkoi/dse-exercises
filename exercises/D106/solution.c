#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int units = n % 10;
	if (n >= 10 && n / 10 % 10 == 1) {
		printf("%dth\n", n);
	} else if (units == 1) {
		printf("%dst\n", n);
	} else if (units == 2) {
		printf("%dnd\n", n);
	} else if (units == 3) {
		printf("%drd\n", n);
	} else {
		printf("%dth\n", n);
	}
	return 0;
}
