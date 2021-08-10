#include <iostream> 
using namespace std;
int main() {
    string a, b, c, d, e;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    getline(cin, d);
    getline(cin, e);
    cout << a << " and " << b << " both study in " << e << ".\n";
    cout << "They hate each other and they argued in the " << d << ".\n";
    cout << "Strangely, after that they ate " << c << " together.\n";
}