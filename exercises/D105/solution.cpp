#include <iostream>
using namespace std;
int main() {
    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    int a = 10000 * y1 + 100 * m1 + d1;
    int b = 10000 * y2 + 100 * m2 + d2;
    if (a < b) {
        cout << "Before" << endl;
    } else if (a == b) {
        cout << "Same" << endl;
    } else {
        cout << "After" << endl;
    }
    return 0;
}
