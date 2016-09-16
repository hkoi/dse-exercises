#include <bits/stdc++.h>
using namespace std;
char s[10];
int main() {
  int n, x;
  scanf("%d", &n);
  queue<int> q;
  for (int i = 0; i < n; i++) {
    scanf("%s", s);
    if (strcmp(s, "PUSH") == 0) {
      scanf("%d", &x);
      q.push(x);
    } else if (strcmp(s, "FRONT") == 0) {
      if (q.empty()) {
        printf("Empty\n");
      } else {
        printf("%d\n", q.front());
      }
    } else if (strcmp(s, "POP") == 0) {
      if (q.empty()) {
        printf("Cannot pop\n");
      } else {
        q.pop();
      }
    } else {
      printf("%d\n", (int)q.size());
    }
  }
  return 0;
}
