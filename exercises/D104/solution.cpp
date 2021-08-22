#include <cmath> 
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    cout << fixed << setprecision(3);
    if (d < 0) {
        cout << "None" << endl;
    } else if (d == 0) {
        cout << -b / (2.0 * a) << endl;
    } else {
        double x = (-b - sqrt(d)) / (2.0 * a);
        double y = (-b + sqrt(d)) / (2.0 * a);
        if (x < y) {
            cout << x << " " << y << endl;
        } else {
            cout << y << " " << x << endl;
        }
    }
}
