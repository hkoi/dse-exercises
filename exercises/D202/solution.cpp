#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = sqrt(n);
    for (int i = 1; i <= m; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
    if (m * m == n) {
        m--;
    }
    for (int i = m; i >= 1; i--) {
        if (n % i == 0) {
            cout << n / i << endl;
        }
    }
}
