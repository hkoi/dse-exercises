#include <iostream> 
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    string s[21];
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }
    s[h][w - 1] = 'S';
    for (int i = h - 1; i >= 0; i--) {
        for (int j = w - 1; j >= 0; j--) {
            if (s[i][j] == '#') {
                continue;
            }
            if (s[i + 1][j] == 'S' || s[i + 1][j] == 'E') {
                s[i][j] = 'S';
            } else if (s[i][j + 1] == 'S' || s[i][j + 1] == 'E') {
                s[i][j] = 'E';
            }
        }
    }
    int row = 0, col = 0;
    for (int i = 0; i < h + w - 2; i++) {
        cout << s[row][col];
        if (s[row][col] == 'S') {
            row++;
        } else {
            col++;
        }
    }
}
