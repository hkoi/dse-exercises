#include <iostream> 
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int k = i * 10 + j;
            if (k / 10 == n || k % 10 == n || k % n == 0) {
                cout << "Clap";
            } else {
                cout << k;
            }
            if (j < 10) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }
}