#include "hkoi-grader.h"
#include <cstdlib>
#include <cstring>
#include <string>
#include <regex>
using namespace std;

extern "C" {
    bool validate(int x, int y, char s[]);
}

static bool checkerValidate(int x, int y, char s[]) {
    if(!regex_match(s, regex("0|[1-9]\\d{0,5}"))) return false;
    int n = atoi(s);
    return x <= n && n <= y;
}

int main(int argc, char *argv[]) {
    registerTestlibCmd(argc, argv);
    int x = inf.readInt(), y = inf.readInt();
    string s = inf.readLine();
    char t[101];
    strcpy(t, s.c_str());
    bool checkerValid = checkerValidate(x, y, t);
    bool valid = validate(x, y, t);
    if (checkerValid == valid) quitf(_ok, "Ok");
    else quitf(_wa, "Wrong answer");
    return 0;
}
