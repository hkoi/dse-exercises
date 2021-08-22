#include <iomanip>
#include <iostream> 
using namespace std;
double fare[101][101];
int main() {
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> fare[i][j];
        }
    }
    cin >> m;
    cout << fixed << setprecision(1);
    for (int i = 1; i <= m; i++) {
        int x, y;
        char c;
        cin >> x >> y >> ws >> c;
        if ((c == 'A') != (x < y)) {
            int t = x;
            x = y;
            y = t;
        }
        cout << fare[x][y] << endl;
    }
}
