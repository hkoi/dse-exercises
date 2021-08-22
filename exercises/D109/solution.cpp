#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n >= 1000) {
        cout << "1000" << endl;
        n -= 1000;
    }
    while (n >= 500) {
        cout << "500" << endl;
        n -= 500;
    } 
    while (n >= 100) {
        cout << "100" << endl;
        n -= 100;
    }
    while (n >= 50) {
        cout << "50" << endl;
        n -= 50;
    }
    while (n >= 20) {
        cout << "20" << endl;
        n -= 20;
    }
    while (n >= 10) {
        cout << "10" << endl;
        n -= 10;
    }
}
