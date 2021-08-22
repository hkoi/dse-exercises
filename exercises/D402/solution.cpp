#include <iomanip>
#include <iostream> 
using namespace std;
long long barcode[100];
double price[100];
int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> barcode[i] >> price[i];
    }
    double sum = 0.0;
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
