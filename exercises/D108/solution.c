#include <stdio.h>
int main() {
	int a, b, c;
	char x, y;
	int ans;
	scanf("%d %c %d %c %d", &a, &x, &b, &y, &c);
	if (x == '+' && y == '+') ans = a + b + c;
	if (x == '+' && y == '-') ans = a + b - c;
	if (x == '+' && y == '*') ans = a + b * c;
	if (x == '-' && y == '+') ans = a - b + c;
	if (x == '-' && y == '-') ans = a - b - c;
	if (x == '-' && y == '*') ans = a - b * c;
	if (x == '*' && y == '+') ans = a * b + c;
	if (x == '*' && y == '-') ans = a * b - c;
	if (x == '*' && y == '*') ans = a * b * c;
	printf("%d\n", ans);
	return 0;
}
