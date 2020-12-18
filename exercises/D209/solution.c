#include<stdio.h>
#include<stdbool.h>

int n, i, t1, t2;
bool ok = true;
int main() {
	scanf("%d", &n);
	scanf("%d", &t1);
	if (t1 <= 100 || t1 >= 50000)
		ok = false;
	for (i = 0; i < n - 1; i++){
		scanf("%d", &t2);
		if (t2 <= 100 || t2 >= 50000 || t1 >= t2)
			ok = false;
		t1 = t2;
	}
	if (ok)
		printf("Valid");
	else
		printf("Invalid");
	return 0;
}
