#include "testlib.h"
using namespace std;
set<int> s;
vector<int> v;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    int k = atoi(argv[1]);
    int n = rnd.next(99999, 100000);
    int q = rnd.next(99999, 100000);
    if (k <= 3)
      n = 100;
    else if (k <= 5)
      n = 2000;
    if (k == 2)
      q = 100;
    else if (k <= 4)
      q = 2000;
    while (s.size() != n) {
      if (k == 1) {
        s.insert(rnd.next(-100, 100));
      } else {
        s.insert(rnd.next(INT_MIN, INT_MAX));
      }
    }
    v.insert(v.begin(), s.begin(), s.end());
    printf("%d %d\n", n, q);
    for (int i = 0; i < n; i++) {
      printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
    }
    for (int i = 0; i < q; i++) {
      if (rnd.next(1, 5) == 1) {
        printf("%d", rnd.next(INT_MIN, INT_MAX));
      } else {
        printf("%d", v[rnd.next(0, n - 1)]);
      }
      printf("%c", i == q - 1 ? '\n' : ' ');
    }
    return 0;
}
