#include "testlib.h"
#include <iostream>
#include <algorithm>

using namespace std;

string a[100];
int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    int n = rnd.next(90, 100);
    if (k == 5) n = 100;
    string s = rnd.next("[A-Z]{6,10}");
    a[0] = s;
    for (int i = 1; i <= 29; i++) {
      string t = "";
      int x = rnd.next(1, 10);
      for (int j = 0; j < x; j++) {
        t += s[rnd.next(0, (int)s.length() - 1)];
      }
      a[i] = t;
    }
    for (int i = 30; i < n; i++) {
    	a[i] = rnd.next("[A-Z]{1,10}");
    }
    shuffle(a, a + n);
    cout << s << endl << n << endl;
    for (int i = 0; i < n; i++) {
      cout << a[i] << endl;
    }
    return 0;
}
