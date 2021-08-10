#include <iostream> 
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n != 1) {
        cout << n << endl;
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
    }
    cout << 1 << endl;
}