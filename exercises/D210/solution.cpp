#include <iostream> 
#include <iomanip>
using namespace std;
int main() {
    int n, x, y, x1, x2, y1, y2, sum = 0;
    cin >> n >> x >> y;
    x1 = x;
    y1 = y;
    for (int i = 2; i <= n; i++) {
        cin >> x2 >> y2;
        sum += x1 * y2 - x2 * y1;
        x1 = x2;
        y1 = y2;
    }
    sum += x2 * y - x * y2;
    cout << fixed << setprecision(1) << sum / 2.0 << endl;
}
