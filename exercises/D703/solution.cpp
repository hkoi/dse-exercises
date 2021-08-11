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
    p = h;
    while (p != 0) {
        cout << a[p] << endl;
        p = b[p];
    }
    cout << "End\n";
}
