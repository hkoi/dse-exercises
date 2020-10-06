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

    if (s.find(a) == -1) quitf(_wa, "A not found");
    if (s.find(b) == -1) quitf(_wa, "B not found");
    if (s.find(c) == -1) quitf(_wa, "C not found");
    if (s.find(d) == -1) quitf(_wa, "D not found");
    if (s.find(e) == -1) quitf(_wa, "E not found");
    quitf(_ok, "All found");
    return 0;
}
