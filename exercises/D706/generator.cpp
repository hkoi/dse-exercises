#include "testlib.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;
vector<pair<string, int> > ops;

void push(const char* s, int x) {
  ops.push_back({string(s), x});
}

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    int cnt = 0;
    for (int i = 0; i < 1000000; i++) {
      int y;
      if (cnt == 10000) {
        y = rnd.next(1, k);
      } else {
        y = rnd.next(1, 11);
      }
      if (y == 1) {
        push("SIZE", 0);
      } else if (y == 2) {
        push("FRONT", 0);
      } else if (y <= k) {
        push("POP", 0);
        cnt--;
      } else {
        push("PUSH", rnd.next(1, 1000000000));
        cnt++;
      }
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
