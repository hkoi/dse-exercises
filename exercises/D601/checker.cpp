#include <bits/stdc++.h>
using namespace std;

extern "C" {
	// grader functions
	void answer(char c[]);

	void format(int x);
}

// print this key along with the verdict
static char graderSecretKey[100];

static bool calledAnswer;
static string ans;

static void fail(char s[]) {
	cout << graderSecretKey << endl << 0 << endl << s;
	exit(0);
}

static void calcModalAns(int x) {
	int num = 0;
	while(x) {
		ans += x % 10 + '0';
		x /= 10;
		num = (num + 1) % 3;
		if (num == 0 && x) ans += ',';
	}
	ans += '$';
	reverse(ans.begin(), ans.end());
}

void answer(char s[]) {
	if (calledAnswer) fail("called answer for more than one time");
	calledAnswer = true;
	if (strcmp(ans.c_str(), s) != 0) fail("incorrect");
}

int main(int argc, char** argv) {
	strcpy(graderSecretKey, argv[1]);

	int x;
	cin >> x;
	calcModalAns(x);
	format(x);
	if (!calledAnswer) fail("didn't call answer");
	cout << graderSecretKey << endl << 100 << endl << "correct";
	return 0;
}