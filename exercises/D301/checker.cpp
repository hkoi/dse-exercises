#include "testlib.h"
#include <algorithm>
using namespace std;

int main(int argc, char * argv[])
{
    registerTestlibCmd(argc, argv);
    string a = inf.readLine();
    string b = inf.readLine();
    string c = inf.readLine();
    string d = inf.readLine();
    string e = inf.readLine();
    string s = "";
    while (!ouf.seekEof()) {
        s += ouf.readLine();
    }
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    transform(c.begin(), c.end(), c.begin(), ::tolower);
    transform(d.begin(), d.end(), d.begin(), ::tolower);
    transform(e.begin(), e.end(), e.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    ensuref(s.find(a) != -1, "A not found");
    ensuref(s.find(b) != -1, "B not found");
    ensuref(s.find(c) != -1, "C not found");
    ensuref(s.find(d) != -1, "D not found");
    ensuref(s.find(e) != -1, "E not found");
    quitf(_ok, "All found");
    return 0;
}
