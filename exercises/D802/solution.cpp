#include <iostream>
using namespace std;
int main() {
    int n, d, a[2000];
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < n - i; j++) {
        if (d == 0 && a[j] > a[j + 1] ||
            d == 1 && a[j] < a[j + 1]) {
          int t = a[j];
          a[j] = a[j + 1];
          a[j + 1] = t;
          ans++;
        }
      }
    }
    cout << ans << endl;
    for (int i = 0; i < n - 1; i++) {
      cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;
}
