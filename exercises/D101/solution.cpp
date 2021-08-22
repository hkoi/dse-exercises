#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b = a / 10000000;
    if (b == 2) {
        cout << "Fixed" << endl;
    } else if (b == 3) {
        cout << "Fixed" << endl;
    } else {
        cout << "Mobile" << endl;
    }
}
