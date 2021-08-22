#include <iostream>
using namespace std;
int main() {
    int n, x, q[10001];
    string s;
    cin >> n;
    int qs = 0, qe = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "PUSH") {
            cin >> x;
            q[qe++] = x;
            if (qe == 10001) {
                qe = 0;
            }
        } else if (s == "FRONT") {
            if (qs == qe) {
                cout << "Empty\n";
            } else {
                cout << q[qs] << endl;
            }
        } else if (s == "POP") {
            if (qs == qe) {
                cout << "Cannot pop\n";
            } else {
                qs++;
                if (qs == 10001) {
                    qs = 0;
                }
            }
        } else {
            cout << (10001 + qe - qs) % 10001 << endl;
        }
    }
}
