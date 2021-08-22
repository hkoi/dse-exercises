#include <iostream>
using namespace std;
int a[100000], b[100000];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int j = 0, k = 0;
    for (int i = 0; i < n + m; i++) {
        // short circuit: k == m is checked first
        if (k == m || j != n && a[j] < b[k]) {
            cout << a[j++];
        } else {
            cout << b[k++];
        }
        cout << (i == n + m - 1 ? '\n' : ' ');
    }
}
