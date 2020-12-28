#include "hkoi-grader.h"
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

extern "C" {
    void answer(int i, int x);
    void nim(int n, int a[]);
}

static int answerCnt = 0, answerI, answerX;

void answer(int i, int x) {
    ++answerCnt;
    answerI = i;
    answerX = x;
}

static int calcNimSum(vector<int> &a) {
    return accumulate(a.begin(), a.end(), 0, bit_xor<int>());
}

static int checkerNim(vector<int> &a) {
    int nimSum = calcNimSum(a);
    if (nimSum == 0) {
        vector<pair<int, int>> aWithIndex, aNonEmpty;
        transform(a.begin(), a.end(), back_inserter(aWithIndex), [&](int &x) { return make_pair(&x - &a.front(), x); });
	copy_if(aWithIndex.begin(), aWithIndex.end(), back_inserter(aNonEmpty), [](pair<int, int> x) { return x.second > 0; });
        int i = aNonEmpty[rnd.next(aNonEmpty.size())].first;
        int x = rnd.next(a[i]) + 1;
        a[i] -= x;
        return x;
    }
    int significantBit = 1;
    for (int i = 1; i <= nimSum; i <<= 1) {
        if ((nimSum & i) != 0) {
            significantBit = i;
        }
    }
    for (int &i : a) {
        if ((i & significantBit) != 0) {
            i ^= nimSum;
            return (i ^ nimSum) - i;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    registerTestlibCmd(argc, argv);
    int n = inf.readInt();
    vector<int> a = inf.readInts(n);
    int aSum = accumulate(a.begin(), a.end(), 0);
    while (true) {
        vector<int> aCopy(a);
        answerCnt = 0;
        nim(n, aCopy.data());
        if (answerCnt == 0) quitf(_wa, "Did not call answer()");
        if (answerCnt > 1) quitf(_wa, "Called answer() multiple times");
        if (answerI < 0 || n <= answerI) quitf(_wa, "i out of range [0, n)");
        if (answerX < 1 || a[answerI] < answerX) quitf(_wa, "x out of range [1, a[i]]");
        a[answerI] -= answerX;
        aSum -= answerX;
        if (aSum == 0) quitf(_ok, "Ok");
        aSum -= checkerNim(a);
        if (aSum == 0) quitf(_wa, "Wrong answer");
    }
    return 0;
}
