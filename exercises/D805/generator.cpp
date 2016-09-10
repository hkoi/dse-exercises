#include "testlib.h"
using namespace std;
vector<pair<pair<int, int>, int>> v;
void recur(int l, int r) {
    if (l == r) return ;
    int mid = (l + r) / 2;
    if (l % 2 == r % 2) {
        mid -= rnd.next(0, 1);
    }
    recur(l, mid);
    recur(mid + 1, r);
    v.push_back({{l, mid}, r});
}
int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    int n = atoi(argv[1]);
    recur(1, n);
    printf("%d %d\n", n, (int) v.size());
    for (int i = 1; i <= n; i++) {
        printf("%d%c", rnd.next(INT_MIN, INT_MAX), i == n ? '\n' : ' ');
    }
    for (auto& x : v) {
        printf("%d %d %d %d\n", x.first.first, x.first.second, x.first.second + 1, x.second);
    }
    return 0;
}
