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
    if (k == 1) {
      for (int i = 0; i < 1000; i++) {
        push("PUSH", rnd.next(1, 1000000000));
      }
    }
    if (k == 2) {
      for (int i = 0; i < 499; i++) {
        push("PUSH", rnd.next(1, 1000000000));
      }
      for (int i = 0; i < 499; i++) {
        push("POP", 0);
      }
      push("TOP", 0);
      push("SIZE", 0);
    }
    if (k == 3) {
      for (int i = 0; i < 540; i++) {
        push("PUSH", rnd.next(1, 5));
      }
      for (int i = 0; i < 450; i++) {
        push("POP", 0);
      }
      for (int i = 0; i < 5; i++) {
        push("TOP", 0);
        push("SIZE", 0);
      }
      shuffle(ops.begin(), ops.end());
    }
    if (k == 4) {
      for (int i = 0; i < 400; i++) {
        push("PUSH", rnd.next(1, 1000000000));
      }
      for (int i = 0; i < 400; i++) {
        push("POP", 0);
      }
      for (int i = 0; i < 100; i++) {
        push("TOP", 0);
        push("SIZE", 0);
      }
      shuffle(ops.begin(), ops.end());
    }
    if (k == 5) {
      for (int i = 0; i < 700; i++) {
        push("PUSH", rnd.next(1, 1000000000));
      }
      for (int i = 0; i < 100; i++) {
        push("POP", 0);
      }
      for (int i = 0; i < 100; i++) {
        push("TOP", 0);
        push("SIZE", 0);
      }
      shuffle(ops.begin(), ops.end());
    }
    if (k == 6) {
      for (int i = 0; i < 499; i++) {
        push("POP", 0);
      }
      for (int i = 0; i < 499; i++) {
        push("PUSH", rnd.next(1, 1000000000));
      }
      push("TOP", 0);
      push("SIZE", 0);
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
