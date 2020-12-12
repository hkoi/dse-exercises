#include <stdio.h>
int x[1005], y[1005];
int main() {
	int n, ans = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d%d", &x[i], &y[i]);
	x[n + 1] = x[1];
	y[n + 1] = y[1];
	for (int i = 1; i <= n; i++) ans += x[i] * y[i+1] - x[i+1] * y[i];
	printf("%.3f\n", ans / 2.0);
	return 0;
}
