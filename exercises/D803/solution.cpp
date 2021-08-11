#include <iostream>
using namespace std;
int main() {
    int n, x, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (x > a[j]) {
                break;
            }
            a[j + 1] = a[j];
        }
        a[j + 1] = x;
        for (j = 0; j < i; j++) {
            cout << a[j] << " ";
        }
        cout << a[i] << endl;
    }
}
