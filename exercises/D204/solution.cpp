#include <iostream> 
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = n / 2;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= m + i; j++) {
            if (j == m - i || j == m + i) {
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = m - 1; i >= 0; i--) {
        for (int j = 0; j <= m + i; j++) {
            if (j == m - i || j == m + i) {
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}