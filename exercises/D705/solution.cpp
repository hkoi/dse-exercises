#include <iostream>
using namespace std;
int main() {
    int n, h, p, a[10001], b[10001];
    cin >> n >> h;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    int y;
    cin >> y;
    if (y == 1) {
        cout << b[h] << endl;
        cout << -1 << endl;
        return 0;
    }
    p = h;
    for (int i = 1; i < y - 1; i++) {
        p = b[p];
    }
    cout << h << endl;
    cout << p << " " << a[p] << " " << b[b[p]] << endl;
}
