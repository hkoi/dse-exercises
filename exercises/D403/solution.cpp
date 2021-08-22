#include <iostream> 
using namespace std;
int freqa[26];
int freqb[26];
int main() {
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
            cout <<"Yes" << endl;
        } else {
            cout <<"No" << endl;
        }
    }
}
