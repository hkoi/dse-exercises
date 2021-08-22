#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    char dummy;
    double fare;
    cin >> dummy >> fare;
    int ten_cents = round(fare * 10);
    int ten_cent_shalved;
    if (ten_cents % 2 == 0) {
        ten_cent_shalved = ten_cents / 2;
    } else {
        ten_cent_shalved = ten_cents / 2 + 1;
    }
    cout << fixed << setprecision(1) << "$" << ten_cent_shalved / 10.0 << endl;
    return 0;
}
