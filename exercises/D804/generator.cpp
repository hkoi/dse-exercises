#include "testlib.h"
using namespace std;
vector<int> v, w;
int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    int k = atoi(argv[1]);
    int n = rnd.next(99998, 100000);
    int m = rnd.next(99998, 100000);
    if (k == 1) {
      for (int i = 0; i < n; i++) {
        v.push_back(-2147483648 + i);
      }
      for (int i = 0; i < m; i++) {
        w.push_back(2147383648 + i);
      }
    }
    if (k == 2) {
      for (int i = 0; i < n; i++) {
        v.push_back(2147383648 + i);
      }
      for (int i = 0; i < m; i++) {
        w.push_back(-2147483648 + i);
      }
    }
    if (k == 3) {
      for (int i = 0; i < n; i++) {
        v.push_back(-5000 + i * 2);
      }
      for (int i = 0; i < m; i++) {
        w.push_back(-5001 + i * 2);
      }
    }
    if (k == 4) {
      for (int i = 0; i < n; i++) {
        v.push_back(0);
      }
      for (int i = 0; i < m; i++) {
        w.push_back(0);
      }
    }
    if (k == 5) {
      for (int i = 0; i < n; i++) {
        v.push_back(i / 1000 * 100);
      }
      for (int i = 0; i < m; i++) {
        w.push_back(i / 500 * 50);
      }
    }
    if (k == 6) {
      for (int i = 0; i < n; i++) {
        v.push_back(rnd.next(-100, 100));
      }
      for (int i = 0; i < m; i++) {
        w.push_back(rnd.next(-100, 100));
      }
      sort(v.begin(), v.end());
      sort(w.begin(), w.end());
    }

    printf("%d %d\n", n, m);
    for (int i = 0; i < n; i++) {
      printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
    }
    for (int i = 0; i < m; i++) {
      printf("%d%c", w[i], i == m - 1 ? '\n' : ' ');
    }
    return 0;
}
