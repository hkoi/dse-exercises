#include<stdio.h>
#include<stdbool.h>

float a[10];
int n, i;
bool ok = true;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%f", &a[i]);
	for (i = 0; i < n; i++)
		if (a[i] != (int)a[i]
		|| a[i] <= 100 || a[i] >= 50000)
			ok = false;
	for (i = 1; i < n; i++)
		if (a[i-1] <= a[i])
			ok = false;
	if (ok)
		printf("Valid");
	else
		printf("Invalid");
	return 0;
}
