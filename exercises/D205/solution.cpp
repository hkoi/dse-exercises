#include <cmath>
#include <iostream> 
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = sqrt(n);
    bool first = true;
    cout << n << "=";
    for (int i = 2; i <= m; i++) {
        while (n % i == 0) {
            if (!first) {
                cout << "*";
            }
            cout << i;
            n /= i;
            first = false;
        }
    }
    if (n > 1) {
        if (!first) {
            cout << "*";
        }
        cout << n;
    }
    cout << endl;
}
