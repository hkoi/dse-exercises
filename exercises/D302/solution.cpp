#include <iostream> 
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int len = s.length();
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    cout << len << endl << count + 1 << endl;
}
