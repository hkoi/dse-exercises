#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double r = 3.141592653 * c / 180;
    cout << fixed << setprecision(3) << 0.5 * a * b * sin(r) << endl;
}
