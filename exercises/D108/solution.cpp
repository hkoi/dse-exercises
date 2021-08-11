#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    char x, y;
    int ans;
    cin >> a >> ws >> x >> ws >> b >> ws >> y >> ws >> c;
    if (x == '+' && y == '+') ans = a + b + c;
    if (x == '+' && y == '-') ans = a + b - c;
    if (x == '+' && y == '*') ans = a + b * c;
    if (x == '-' && y == '+') ans = a - b + c;
    if (x == '-' && y == '-') ans = a - b - c;
    if (x == '-' && y == '*') ans = a - b * c;
    if (x == '*' && y == '+') ans = a * b + c;
    if (x == '*' && y == '-') ans = a * b - c;
    if (x == '*' && y == '*') ans = a * b * c;
    cout << ans << endl;
}
