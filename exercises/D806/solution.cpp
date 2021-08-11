#include <iostream>
using namespace std;
void recur(int l, int r) {
    if (l == r) return ;
    int mid = (l + r) / 2;
    recur(l, mid);
    recur(mid + 1, r);
    cout << l << " " << mid << " " << mid + 1 << " " << r << endl;
}
int main() {
    int n;
    cin >> n;
    recur(1, n);
}
