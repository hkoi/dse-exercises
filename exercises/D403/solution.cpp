#include <iostream> 
#include <iomanip>
using namespace std;
int main() {
    int freqa[26] = {0}, freqb[26] = {0};
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        freqa[s[i] - 'A']++;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            freqb[j] = 0;
        }
        cin >> s;
        int len = s.length();
        for (int j = 0; j < len; j++) {
            freqb[s[j] - 'A']++;
        }
        bool ok = true;
        for (int j = 0; j < 26; j++) {
            if (freqb[j] > freqa[j]) {
                ok = false;
            }
        }
        if (ok) {
            cout <<"Yes\n";
        } else {
            cout <<"No\n";
        }
    }
}
