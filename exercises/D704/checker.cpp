#include "testlib.h"
#include <vector>
using namespace std;

int a[10005], b[10005];
vector<int> v;
int main(int argc, char * argv[]) {
    registerTestlibCmd(argc, argv);

    int n, h, i, p;
    n = inf.readInt();
    h = inf.readInt();
    for (i = 1; i <= n; i++) {
        a[i] = inf.readInt();
    }
    for (i = 1; i <= n; i++) {
        b[i] = inf.readInt();
    }
    p = h;
    while (p)  {
        v.push_back(a[p]);
        p = b[p];
    }
    int x = inf.readInt();
    int y = inf.readInt();
    v.insert(v.begin() + y, x);

    int nh = ouf.readInt(1, n + 1, "newhead");
    a[n + 1] = ouf.readInt(1, 1000000000, "newa");
    b[n + 1] = ouf.readInt(0, n, "newb");
    int ci = ouf.readInt(-1, n, "changei");
    if (ci == 0) {
        quitf(_wa, "changei is 0");
    }
    if (ci > 0) {
        a[ci] = ouf.readInt(1, 1000000000, "changea");
        b[ci] = ouf.readInt(0, n + 1, "changeb");
    }

    p = nh;
    for (int i = 0; i < v.size(); i++) {
        if (a[p] != v[i]) {
            quitf(_wa, "%d-th element different", i);
        }
        p = b[p];
    }
    if (p != 0) {
        quitf(_wa, "result linked list longer than expected");
    }
    quitf(_ok, "Resulted in same linked list");
    return 0;
}
