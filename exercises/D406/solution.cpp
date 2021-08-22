#include <iostream> 
using namespace std;
int a[20], b[20];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i])
                found = true;
        }
        if (!found) {
            b[c] = a[i];
            c++;
        }
    }
    cout << c << endl;
    for (int i = 0; i < c - 1; i++)
        cout << b[i] << " ";
    cout << b[c - 1] << endl;
}
