#include <iostream> 
using namespace std;
int main() {
    string s[3];
    for (int i = 0; i < 3; i++)
        getline(cin, s[i]);
    for (int i = 1; i <= 2; i++) {
        char c = 'O';
        if (i == 2) {
            c = 'X';
        }
        for (int j = 0; j <= 2; j++) {
            if (s[j][0] == c && s[j][1] == c && s[j][2] == c) {
                cout << c << " wins" << endl;
                return 0;
            }
            if (s[0][j] == c && s[1][j] == c && s[2][j] == c) {
                cout << c << " wins" << endl;
                return 0;
            }
        }
        if (s[0][0] == c && s[1][1] == c && s[2][2] == c ||
            s[0][2] == c && s[1][1] == c && s[2][0] == c) {
            cout << c << " wins" << endl;
            return 0;
        }
    }
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            if (s[i][j] == '.') {
                cout << "Not ended" << endl;
                return 0;
            }
        }
    }
    cout << "Draw" << endl;
}
