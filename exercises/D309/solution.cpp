#include <iostream> 
using namespace std;
int main() {
    string s, t;
    cin >> s;
    cin >> t;
    int len1 = s.length();
    int len2 = t.length();
    for (char &c: s) {
        c = toupper(c);
    }
    for (char &c: t) {
        c = toupper(c);
    }
    if (s < t) {
        cout << "Smaller\n";
    } else if (s == t) {
        cout << "Equal\n";
    } else {
        cout << "Greater\n";
    }
}
