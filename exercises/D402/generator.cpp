#include "testlib.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

long long a[101];
double b[101];
int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    int n = rnd.next(98, 100);
    int m = rnd.next(98, 100);
    if (k <= 2) m = n;
    if (k == 6) n = 100, m = 100;
    int x = rnd.next(1000000000000, 9999999999999);
    for (int i = 1; i <= n; i++) {
    	a[i] = rnd.next(1000000000000, 9999999999999);
    	b[i] = rnd.next(1, 1000) / 10.0;
    }
    cout << fixed << setprecision(1);
    cout << n << endl;
    for (int i = 1; i <= n; i++) {
      cout << a[i] << ' ' << b[i] << endl;
    }
    cout << m << endl;
    for (int i = 1; i <= m; i++) {
      if (k == 1) {
        cout << a[i] << endl;
      } else if (k == 2) {
        cout << a[n - i + 1] << endl;
      } else {
        cout << a[rnd.next(1, n)] << endl;
      }
    }
    return 0;
}
