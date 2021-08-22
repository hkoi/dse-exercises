#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int units = n % 10;
    cout << n;
    if (n >= 10 && n / 10 % 10 == 1) {
        cout << "th\n";
    } else if (units == 1) {
        cout << "st\n";
    } else if (units == 2) {
        cout << "nd\n";
    } else if (units == 3) {
        cout << "rd\n";
    } else {
        cout << "th\n";
    }
}
