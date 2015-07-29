#include "testlib.h"
#include <iostream>
#include <algorithm>

using namespace std;

int a[100000];
int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    int n = 100000;
    // 1: strictly increasing
    // 2: strictly decreasing
    // 3: not sorted
    // 4: not sorted
    // 5: increasing
    // 6: decreasing
    // 7: equal
    int x = rnd.next(-1000000000, 1000000000);
    for (int i = 0; i < n; i++) {
    	if (k <= 3) {
    		a[i] = rnd.next(-1000000000, 1000000000);
    	} else if (k <= 6) {
			a[i] = rnd.next(-100, 100) * rnd.next(100, 200);
    	} else {
    		a[i] = x;
    	}
    }
    if (k == 1 || k == 2 || k == 5 || k == 6) {
    	sort(a, a + n);
    }
    if (k == 2 || k == 6) {
		reverse(a, a + n);
    }
    cout << n << endl;
    for (int i = 0; i < n; i++) {
    	cout << a[i] << endl;
    }
    return 0;
}