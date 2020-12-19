#include <stdio.h>
int main() {
	int n, x, y, x1, x2, y1, y2, ans = 0;
	scanf("%d%d%d", &n, &x, &y);
	x1 = x;
	y1 = y;
	for (int i = 2; i <= n; i++) {
		scanf("%d%d", &x2, &y2);
		ans += x1 * y2 - x2 * y1;
		x1 = x2;
		y1 = y2;
	}
	ans += x2 * y - x * y2;
	printf("%.3f\n", ans / 2.0);
	return 0;
}
