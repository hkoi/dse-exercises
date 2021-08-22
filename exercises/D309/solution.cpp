#include <cctype>
#include <iostream>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    cin >> t;
    int len1 = s.length();
    int len2 = t.length();
    for (int i = 0; i < len1; i++) {
        s[i] = toupper(s[i]);
    }
    for (int i = 0; i < len2; i++) {
        t[i] = toupper(t[i]);
    }
    if (s < t) {
        cout << "Smaller" << endl;
    } else if (s == t) {
        cout << "Equal" << endl;
    } else {
        cout << "Greater" << endl;
    }
}
