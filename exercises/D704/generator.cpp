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
    for (int i = 0; i < 350; i++) {
      push("QUERY", 0);
      push("NEXT", 0);
    }
    for (int i = 0; i < 150; i++) {
      push("INSERTAFTER", rnd.next(1, 100000000));
    }
    for (int i = 0; i < 120; i++) {
      push("DELETE", 0);
    }
    for (int i = 0; i < 10; i++) {
      push("INSERTHEAD", rnd.next(1, 100000000));
      push("HEAD", 0);
      push("SIZE", 0);
    }
    shuffle(ops.begin(), ops.end());
    printf("%d\n", ops.size());
    for (size_t i = 0; i < ops.size(); i++) {
      cout << ops[i].first;
      if (ops[i].second) {
        cout << " " << ops[i].second;
      }
      cout << endl;
    }
    return 0;
}
