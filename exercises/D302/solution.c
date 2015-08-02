#include <stdio.h>
char s[256];
int main() {
	gets(s);
	int len = strlen(s);
	int i, count = 0;
	for (i = 0; i < len; i++) {
		if (s[i] == ' ') {
			count++;
		}
	}
	printf("%d\n%d\n", len, count + 1);
	return 0;
}
