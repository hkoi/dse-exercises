#include <iostream>
using namespace std;
int q[1000];
int main() {
    int n, x;
    string s;
    cin >> n;
    int qs = 0, qe = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "PUSH") {
            cin >> x;
            q[qe++] = x;
        } else if (s == "FRONT") {
            if (qs == qe) {
                cout << "Empty" << endl;
            } else {
                cout << q[qs] << endl;
            }
        } else if (s == "POP") {
            if (qs == qe) {
                cout << "Cannot pop" << endl;
            } else {
                qs++;
            }
        } else {
            cout << qe - qs << endl;
        }
    }
}
