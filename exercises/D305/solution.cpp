#include <iostream> 
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int len = s.length(), sum;
    if (len == 8) {
        sum = 9 * (s[0] - 'A' + 10) + 8 * (s[1] - 'A' + 10);
    } else {
        sum = 9 * 36 + 8 * (s[0] - 'A' + 10);
    }
    sum += 7 * (s[len - 6] - '0');
    sum += 6 * (s[len - 5] - '0');
    sum += 5 * (s[len - 4] - '0');
    sum += 4 * (s[len - 3] - '0');
    sum += 3 * (s[len - 2] - '0');
    sum += 2 * (s[len - 1] - '0');
    if (sum % 11 == 0) {
        cout << s << "(0)\n";
    } else if (sum % 11 == 1) {
        cout << s << "(A)\n";
    } else {
        cout << s << "(" << 11 - sum % 11 << ")\n";
    }
}
