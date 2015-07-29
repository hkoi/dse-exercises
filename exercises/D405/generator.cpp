#include "testlib.h"
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int h[16] = {0, 3, 4, 4, 7, 3, 6, 3, 10, 12, 15, 20, 20, 20, 20, 20};
int w[16] = {0, 3, 4, 4, 7, 6, 3, 20, 20, 10, 20, 15, 20, 20, 20, 20};
int d[16] = {0, 4, 3, 20, 30, 20, 5, 50, 100, 120, 20, 300, 40, 100, 300, 800};
string s[21];
int a[50];
int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    int n = h[k];
    int m = w[k];
    cout << n << ' ' << m << endl;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        s[i] += ".";
      }
    }
    for (int i = 0; i < d[k]; i++) {
      s[rnd.next(0, n - 1)][rnd.next(0, m - 1)] = '#';
    }
    s[0][0] = '.';
    for (int i = 0; i < n - 1; i++) {
      a[i] = 1;
    }
    for (int i = 0; i < m - 1; i++) {
      a[n + i] = 2;
    }
    shuffle(a, a + n + m - 2);
    int cx = 0, cy = 0;
    for (int i = 0; i < n + m - 2; i++) {
      if (a[i] == 1) {
        cx++;
      } else {
        cy++;
      }
      s[cx][cy] = '.';
    }
    for (int i = 0; i < n; i++) {
      cout << s[i] << endl;
    }
    return 0;
}
