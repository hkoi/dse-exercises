#include<stdio.h>

int a[20], b[20];
int n, i, j, c;
bool found;
int main(){
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	c = 0;
	for (i = 0; i < n; i++){
		found = 0;
		for (j = 0; j < i; j++)
			if (a[j] == a[i]) found = 1;	
		if (found == 0) {
			b[c] = a[i];
			c++;
		}
	}
	printf("%d\n", c);
	for (i = 0; i < c; i++)
		printf("%d ", b[i]);
	return 0;
}
