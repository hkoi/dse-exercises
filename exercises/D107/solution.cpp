#include <cmath>
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long a = round(sqrt(n));
    long long b = floor(sqrt(n * 2));
    bool square = a * a == n;
    bool triangular = b * (b + 1) / 2 == n;
    if (square && triangular) {
        cout << "Both" << endl;
    } else if (square) {
        cout << "Square" << endl;
    } else if (triangular) {
        cout << "Triangular" << endl;
    } else {
        cout << "Neither" << endl;
    }
}
