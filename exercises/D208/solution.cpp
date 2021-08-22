#include <iostream> 
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = -2147483648, b = -2147483648;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x >= a) {
            b = a;
            a = x;
        } else if (x > b) {
            b = x;
        }
    }
    cout << a << endl;
    cout << b << endl;
}
