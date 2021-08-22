#include <iostream>
using namespace std;
int a[10001], b[10001];
int main() {
    int n, h, p;
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
    cout << "End" << endl;
}
