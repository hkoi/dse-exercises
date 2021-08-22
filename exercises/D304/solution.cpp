#include <iostream> 
using namespace std;
int main() {
    string s, t;
    getline(cin, s);
    int len = s.length(), count = 0;
    t = "____________________";
    t = t.substr(0, len);
    while (count < len) {
        char c;
        cin >> ws >> c;
        for (int i = 0; i < len; i++) {
            if (s[i] == c) {
                t[i] = c;
                count++;
            }
        }
       cout << t << endl;
    }
}
