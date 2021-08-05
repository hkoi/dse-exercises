#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n >= 1000) {
        cout << "1000\n";
        n -= 1000;
    }
    while (n >= 500) {
        cout << "500\n";
        n -= 500;
    } 
    while (n >= 100) {
        cout << "100\n";
        n -= 100;
    }
    while (n >= 50) {
        cout << "50\n";
        n -= 50;
    }
    while (n >= 20) {
        cout << "20\n";
        n -= 20;
    }
    while (n >= 10) {
        cout << "10\n";
        n -= 10;
    }
}