#include "testlib.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    int k = atoi(argv[1]);
    string s, t;
    if (k == 1) {
        s = "hongkong";
        t = "eougihank";
    }
    if (k == 2) {
        s = "zzz";
        t = "abcdefghijklmnopqrstuvwxyz";
    }
    if (k == 3) {
        s = "zvtsrnkcba";
        t = "abcdefghijklmnopqrstuvwxyz";
    }
    if (k == 4) {
        s = "aaaaabbbbbcccccddddd";
        t = "zyxwvutsrqponmlkjihgfedcba";
    }
    if (k == 5) {
        s = "aaaaabbbbbcccccddddd";
        t = "abcd";
    }
    if (k == 6) {
        s = "piameoigmaoiwemfpaoq";
        t = "zyxwvutsrqponmlkjihgfedcba";
    }
    cout << s << endl;
    for (int i = 0; i < t.length(); i++) {
        cout << t[i] << endl;
    }
    return 0;
}
