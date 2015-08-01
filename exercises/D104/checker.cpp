#include "testlib.h"
#include <cmath>

using namespace std;

int main(int argc, char * argv[])
{
    registerTestlibCmd(argc, argv);
    int a, b, c;
    a = inf.readInt();
    b = inf.readInt();
    c = inf.readInt();
    int d = b * b - 4 * a * c;
    if (d < 0) {
        string s = ouf.readToken();
        if (s == "None") {
            quitf(_ok, "None");
        } else {
            quitf(_wa, "expected None got %s", s.c_str());
        }
    } else if (d == 0) {
        double j = ouf.readDouble();
        double x = -b / (2.0 * a);
        if (fabs(j - x) > 0.0001) {
            quitf(_wa, "expected %.3lf got %.3lf", x, j);
        }
        quitf(_wa, "1 root: %.3lf", x);
    } else {
        double x = (-b - sqrt(d)) / (2.0 * a);
        double y = (-b + sqrt(d)) / (2.0 * a);
        if (x > y) {
            double t = x;
            x = y;
            y = t;
        }
        double j = ouf.readDouble();
        double k = ouf.readDouble();
        if (fabs(j - x) > 0.0001) {
            quitf(_wa, "1st root expected %.3lf got %.3lf", x, j);
        }
        if (fabs(k - y) > 0.0001) {
            quitf(_wa, "2nd root expected %.3lf got %.3lf", x, j);
        }
        quitf(_wa, "2 roots: %.3lf %.3lf", x, y);
    }
    return 0;
}
