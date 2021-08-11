#include <iostream>
using namespace std;
int a[101];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int t, p = a[n], i = 1;
    for (int j = 1; j <= n - 1; j++) {
        if (a[j] <= p) {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
            i++;
        }
    }
    t = a[i];
    a[i] = a[n];
    a[n] = t;
    for (i = 1; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << a[n] << endl;
}
