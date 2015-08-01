#include "testlib.h"
#include <cmath>

using namespace std;

int main(int argc, char * argv[])
{
    registerTestlibCmd(argc, argv);
    double a, b, c;
    a = inf.readDouble();
    b = inf.readDouble();
    c = inf.readDouble();
    double r = 3.141592653 * c / 180.0;
    double area = 0.5 * a * b * sin(r);

    double j = ouf.readDouble();
    if (fabs(j - area) > 0.00051) {
        quitf(_wa, "expected %.3lf got %.3lf err %.5lf", area, j, fabs(j - area));
    }
    quitf(_ok, "correct: expected %.5lf got %.3lf", area, j);
    return 0;
}
