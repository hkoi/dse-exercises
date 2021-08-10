#include <iostream> 
using namespace std;
int main() {
    int n;
    bool a[1000001];
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (!a[i]) {
            cout << i  << endl;
            for (int j = i * i; j <= n; j += i) {
                a[j] = true;
            }
        }
    }
}
