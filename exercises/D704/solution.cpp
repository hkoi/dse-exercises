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
    int x, y;
    cin >> x >> y;
    if (y == 0) {
        cout << n + 1 << endl;
        cout << x << " " << h << endl;
        cout << -1 << endl;
        return 0;
    }
    p = h;
    for (int i = 1; i < y; i++) {
        p = b[p];
    }
    cout << h << endl;
    cout << x << " " << b[p] << endl;
    cout << p << " " << a[p] << " " << n + 1 << endl;
}
