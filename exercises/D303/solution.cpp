#include <iostream> 
using namespace std;
int main() {
    string s, t;
    getline(cin, s);
    int len = s.length();
    t = s;
    for (int i = 0; i < len / 2; i++) {
        char c = t[i];
        t[i] = t[len - i - 1];
        t[len - i - 1] = c;
    }
    cout << t << endl;
    if (s == t) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
