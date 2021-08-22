#include <iostream> 
using namespace std;
bool a[1000001];
int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (!a[i]) {
            cout << i << endl;
            if (i > 1000) {
                continue;
            }
            for (int j = i * i; j <= n; j += i) {
                a[j] = true;
            }
        }
    }
}
