#include <iostream> 
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a = n, b = m;
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    cout << a << endl;
    cout << n * m / a << endl;
}