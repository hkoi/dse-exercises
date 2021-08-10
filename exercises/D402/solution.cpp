#include <iostream> 
#include <iomanip>
using namespace std;
int main() {
    int n, m;
    long long barcode[100];
    double price[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> barcode[i] >> price[i];
    }
    double sum = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        long long k;
        cin >> k;
        for (int j = 0; j < n; j++) {
            if (barcode[j] == k) {
                sum += price[j];
            }
        }
    }
    cout << fixed << setprecision(1) << sum << endl;
}
