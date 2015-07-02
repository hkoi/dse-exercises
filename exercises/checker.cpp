#include "testlib.h"
using namespace std;
int main(int argc, char** argv) {
  setName("HKOI find answer somewhere in the output");
  registerTestlibCmd(argc, argv);

  int n = 0;
  string j, p;

  while (!ans.seekEof()) {
    ans.readWordTo(j);
    bool found = false;
    while (!ouf.seekEof()) {
      ouf.readWordTo(p);
      if (j == p) {
        found = true;
        n++;
        break;
      }
    }
    if (!found) {
      quitf(_wa, "Answer \"%s\" is not found anywhere.", compress(j).c_str());
    }
  }
  while (!ouf.seekEof()) {
    ouf.readWordTo(p);
  }
  if (n == 1) {
    quitf(_ok, "\"%s\"", compress(j).c_str());
  } else {
    quitf(_ok, "%d tokens", n);
  }
  return 0;
}
