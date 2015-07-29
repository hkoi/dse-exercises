#include "testlib.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    int n = k == 1 ? 20 : 100;
    cout << fixed << setprecision(1);
    cout << n << endl;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (i == j) {
          cout << "0.0";
        } else {
          cout << (rnd.next(1, 1000) / 10.0);
        }
        if (j == n) {
          cout << endl;
        } else {
          cout << ' ';
        }
      }
    }
    int m = k == 1 ? 100 : 90;
    cout << m << endl;
    for (int i = 0; i < m; i++) {
      int x = rnd.next(1, n);
      int y = x;
      while (x == y) y = rnd.next(1, n);
      cout << x << ' ' << y << ' ' << rnd.next("[AC]") << endl;
    }
    return 0;
}
