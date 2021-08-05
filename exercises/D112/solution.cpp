#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << (a | b) << endl;
    cout << (a & b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;
}