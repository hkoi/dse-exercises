#include <iostream>
using namespace std;
int a[101], ans;
void sort(int l, int r) {
    ans += r - l + 1;
    if (l >= r) {
        return;
    }
    int t, i, j, p;
    p = a[r];
    i = l;
    for (j = l; j <= r - 1; j++) {
        if (a[j] <= p) {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
            i++;
        }
    }
    t = a[i];
    a[i] = a[r];
    a[r] = t;
    sort(l, i - 1);
    sort(i + 1, r);
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(1, n);
    for (int i = 1; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << a[n] << endl;
    cout << ans << endl;
}
