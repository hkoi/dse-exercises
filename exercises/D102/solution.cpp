#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    char dummy;
    double fare;
    cin >> dummy >> fare;
    int ten_cents = round(fare * 10);
    int ten_cents_halved;
    if (ten_cents % 2 == 0) {
        ten_cents_halved = ten_cents / 2;
    } else {
        ten_cents_halved = ten_cents / 2 + 1;
    }
    cout << fixed << setprecision(1) << "$" << ten_cents_halved / 10.0 << endl;
}
