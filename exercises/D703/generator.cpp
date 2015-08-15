#include "testlib.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;
pair<int, int> ll[101];
vector<pair<string, int> > ops;
bool visited[101];
void push(const char* s, int x) {
  ops.push_back({string(s), x});
}

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    int n, h;
    visited[0] = true;
    if (k <= 5) {
      n = rnd.next(1, 100);
      h = rnd.next(1, n);
      if (k == 5) h = 0;
      for (int i = 1; i <= n; i++) {
        ll[i].first = rnd.next(1, k == 3 ? 4 : 1000000000);
        ll[i].second = rnd.next(0, n);
      }
      int t = h, last = h;
      while (!visited[t]) {
        last = t;
        visited[t] = true;
        t = ll[t].second;
      }
      ll[last].second = 0;
    }
    if (k == 6) {
      n = 100; h = 1;
      for (int i = 1; i <= n; i++) {
        ll[i].first = rnd.next(1, 1000000000);
        ll[i].second = i == n ? 0 : i + 1;
      }
    }
    
    for (int i = 0; i < 495; i++) {
      push("QUERY", 0);
      push("NEXT", 0);
    }
    for (int i = 0; i < 10; i++) {
      push("HEAD", 0);
    }
    shuffle(ops.begin(), ops.end());
    printf("%d %d\n", n, h);
    for (int i = 1; i <= n; i++) {
      printf("%d%c", ll[i].first, i == n ? '\n' : ' ');
    }
    for (int i = 1; i <= n; i++) {
      printf("%d%c", ll[i].second, i == n ? '\n' : ' ');
    }
    printf("%d\n", ops.size());
    for (size_t i = 0; i < ops.size(); i++) {
      cout << ops[i].first;
      if (ops[i].first == "PUSH") {
        cout << " " << ops[i].second;
      }
      cout << endl;
    }
    return 0;
}
