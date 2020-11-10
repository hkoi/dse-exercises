#ifdef __cplusplus
extern "C" {
#endif
void format(int x);
void answer(char s[]);
#ifdef __cplusplus
}
#endif

char ans[100];

void format(int x) {
	int num = 0, len = 0;
	while (x) {
		ans[len++] = x % 10 + '0';
		x /= 10;
		num = (num + 1) % 3;
		if (num == 0 && x) ans[len++] = ',';
	}
	ans[len++] = '$';
	for (int i = 0; i < len / 2; i++) {
		char t = ans[i];
		ans[i] = ans[len - i - 1];
		ans[len - i - 1] = t;
	}
	answer(ans);
}
