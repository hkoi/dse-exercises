#include "testlib.h"
using namespace std;
vector<int> v;
int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    int k = atoi(argv[1]);
    int n = 2000;
    if (k == 1) {
      for (int i = 0; i < n; i++) {
        v.push_back(5);
      }
    }
    if (k == 2) {
      for (int i = 0; i < n; i++) {
        v.push_back(i);
      }
    }
    if (k == 3) {
      for (int i = 0; i < n; i++) {
        v.push_back(100 - i);
      }
    }
    if (k >= 4) {
      for (int i = 0; i < n; i++) {
        v.push_back(rnd.next(INT_MIN, INT_MAX));
      }
    }
    printf("%d %d\n", n, 1 - k % 2);
    for (int i = 0; i < n; i++) {
      printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
