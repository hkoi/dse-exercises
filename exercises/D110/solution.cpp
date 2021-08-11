#include <iostream>
using namespace std;
int main() {
    char c1, r1, c2, r2;
    cin >> c1 >> r1;
    cin >> c2 >> r2;
    int c = abs(c1 - c2);
    int r = abs(r1 - r2);
    if (c > r) {
        cout << c << endl;
    } else  {
        cout << r << endl;
    }
}
