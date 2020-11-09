#include<stdio.h>

int a[20];
int n, i;
int main(){
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d ", a[0]);
	for (i = 1; i < n; i++)
		if (a[i] != a[i-1])
			printf("%d ", a[i]);
	return 0;
}