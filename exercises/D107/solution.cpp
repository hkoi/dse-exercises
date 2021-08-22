#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long a = round(sqrt(n));
    long long b = floor(sqrt(n * 2));
    bool square = a * a == n;
    bool triangular = b * (b + 1) / 2 == n;
    if (square && triangular) {
        cout << "Both\n";
    } else if (square) {
        cout << "Square\n";
    } else if (triangular) {
        cout << "Triangular\n";
    } else {
        cout << "Neither\n";
    }
}
