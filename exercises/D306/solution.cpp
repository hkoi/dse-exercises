#include <cctype>
#include <iostream> 
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int len = s.length();
    if (s.find('@') == -1) {
        cout << "Invalid" << endl;
        return 0;
    }
    int at = s.find('@');
    if (s.find('.', at) == -1) {
        cout << "Invalid" << endl;
        return 0;
    }
    for (int i = 0; i < len - 1; i++) {
        if (s[i] == '.' && s[i + 1] == '.') {
            cout << "Invalid" << endl;
            return 0;
        }
    }
    if (s[0] == '.' || s[at - 1] == '.' || s[at + 1] == '.' || s[len - 1] == '.') {
        cout << "Invalid" << endl;
        return 0;
    }
    for (int i = 0; i < at; i++) {
        if (!(isalnum(s[i]) || s[i] == '.' || s[i] == '+')) {
            cout << "Invalid" << endl;
            return 0;
        }
    }
    for (int i = at + 1; i < len; i++) {
        if (!(isalnum(s[i]) || s[i] == '.' || s[i] == '-')) {
            cout << "Invalid" << endl;
            return 0;
        }
        if (i < len - 1 && (s[i] == '.' && s[i + 1] == '-' || s[i] == '-' && s[i + 1] == '.')) {
            cout << "Invalid" << endl;
            return 0;
        }
    }
    cout << "Valid" << endl;
}
