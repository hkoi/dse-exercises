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
        if (fabs(j - x) > 0.00051) {
            quitf(_wa, "expected %.3lf got %.3lf err %.5lf", x, j, fabs(j - x));
        }
        quitf(_ok, "1 root: %.3lf", x);
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
        if (fabs(j - x) > 0.00051) {
            quitf(_wa, "1st root expected %.3lf got %.3lf err %.5lf", x, j, fabs(j - x));
        }
        if (fabs(k - y) > 0.00051) {
            quitf(_wa, "2nd root expected %.3lf got %.3lf err %.5lf", y, k, fabs(k - y));
        }
        quitf(_ok, "2 roots: %.3lf %.3lf", x, y);
    }
    return 0;
}
