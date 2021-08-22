#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double w, h;
    cin >> w >> h;
    double bmi = w / (h * h);
    cout << fixed << setprecision(3) << bmi << endl;
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 23.0) {
        cout << "Normal" << endl;
    } else if (bmi < 25.0) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }
}
