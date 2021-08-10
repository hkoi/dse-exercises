#include <iostream> 
using namespace std;
int main() {
    string s, t;
    cin >> s;
    cin >> t;
    int len1 = s.length();
    int len2 = t.length();
    int a = 0, b = 0;
    for (int i = 0; i <= len1 - len2; i++) {
        if (s.substr(i, len2) == t) {
            a++;
        }
    }
    for (int i = 0; i <= len1 - len2; i++) {
        if (s.substr(i, len2) == t) {
            b++;
            i += len2 - 1;
        }
    }
    cout << a << endl;
    cout << b << endl;
}
