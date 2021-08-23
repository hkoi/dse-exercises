#include "testlib.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;

#define UNORDERED_TOKENS false
#define CASE_INSENSITIVE false

bool compareWords(string a, string b)
{
    vector<string> va, vb;
    stringstream sa;
    
    sa << a;
    string cur;
    while (sa >> cur) {
        if (CASE_INSENSITIVE) {
            cur = upperCase(cur);
        }
        va.push_back(cur);
    }

    stringstream sb;
    sb << b;
    while (sb >> cur) {
        if (CASE_INSENSITIVE) {
            cur = upperCase(cur);
        }
        vb.push_back(cur);
    }

    if (UNORDERED_TOKENS) {
        sort(va.begin(), va.end());
        sort(vb.begin(), vb.end());
    }

    return (va == vb);
}

int main(int argc, char * argv[])
{
    setName("compare files as sequence of tokens in lines");
    registerTestlibCmd(argc, argv);

    std::string strAnswer;

    int n = 0;
    while (!ans.eof() && !ouf.eof()) 
    {
        std::string p = ouf.readString();
        if (p == "") continue;
        strAnswer = p;

        std::string j = ans.readString();

        if (j == "" && ans.eof())
          break;
        n++;

        if (!compareWords(j, p))
            quitf(_wa, "%d%s lines differ - expected: '%s', found: '%s'", n, englishEnding(n).c_str(), compress(j).c_str(), compress(p).c_str());
    }
    if (!ans.eof()) {
      quitf(_wa, "not enough lines");
    }
    if (n == 1)
        quitf(_ok, "single line: '%s'", compress(strAnswer).c_str());
    
    quitf(_ok, "%d lines", n);
}
