#include <iostream>
using namespace std;
int a[100000];
int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
        int x, l = 0, r = n - 1;
        bool found = false;
        cin >> x;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == x) {
                found = true;
                break;
            } else if (a[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (found) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
