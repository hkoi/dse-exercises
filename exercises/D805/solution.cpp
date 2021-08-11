#include <iostream>
using namespace std;
int a[101], b[101];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int l1, r1, l2, r2;
    for (int i = 1; i <= m; i++) {
        cin >> l1 >> r1 >> l2 >> r2;
        int j = l1, k = l2, t = l1;
        while (t <= r2) {
            // short circuit: k == m is checked first
            if (k > r2 || j <= r1 && a[j] < a[k]) {
                b[t++] = a[j++];
            } else {
                b[t++] = a[k++];
            }
        }
        for (j = l1; j <= r2; j++) {
            a[j] = b[j];
            cout << a[j] << (j == r2 ? '\n' : ' ');
        }
    }
}
