#include <iostream>
using namespace std;
int st[1000];
int main() {
    int n, x;
    string s;
    cin >> n;
    int size = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "PUSH") {
            cin >> x;
            st[size++] = x;
        } else if (s == "TOP") {
            if (size == 0) {
                cout << "Empty" << endl;
            } else {
                cout << st[size - 1] << endl;
            }
        } else if (s == "POP") {
            if (size == 0) {
                cout << "Cannot pop" << endl;
            } else {
                size--;
            }
        } else {
            cout << size << endl;
        }
    }
}
