#include <iostream> 
using namespace std;
int main() {
    int n, t1, t2;
    cin >> n;
    cin >> t1;
    bool ok = true;
    if (t1 <= 100 || t1 >= 50000)
        ok = false;
    for (int i = 2; i <= n; i++) {
        cin >> t2;
        if (t2 <= 100 || t2 >= 50000 || t1 >= t2)
            ok = false;
        t1 = t2;
    }
    if (ok)
        cout << "Valid\n";
    else
        cout << "Invalid\n";
}
