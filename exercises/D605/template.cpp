#ifdef __cplusplus
extern "C" {
#endif
    void answer(int i, int x);
    void nim(int n, int a[]);
#ifdef __cplusplus
}
#endif

// TODO: global variables can be declared here

void nim(int n, int a[]) {
    // TODO: implementation
}

#ifndef ONLINE_JUDGE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int n, aSum, answerCnt, a[100], aCopy[100];

void answer(int i, int x) {
    printf("answer(%d, %d)\n",i, x);
    if (++answerCnt > 1) {
        printf("Wrong Answer: Called answer() multiple times\n");
        exit(0);
    }
    if (i < 0 || n <= i) {
        printf("Wrong Answer: i out of range [0, n)\n");
        exit(0);
    }
    if (x < 1 || a[i] < x) {
        printf( "Wrong Answer: x out of range [1, a[i]]\n");
        exit(0);
    }
    a[i] -= x;
    aSum -= x;
}

void computerMove() {
    int i, x;
    printf("Enter computer's i and x: ");
    scanf("%d %d", &i, &x);
    if (i < 0 || n <= i) {
        printf("Wrong Answer: i out of range [0, n)\n");
        exit(0);
    }
    if (x < 1 || a[i] < x) {
        printf( "Wrong Answer: x out of range [1, a[i]]\n");
        exit(0);
    }
    a[i] -= x;
    aSum -= x;
}

int main() {
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter a[0] ... a[n-1]: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        aSum += a[i];
    }
    while (true) {
        answerCnt = 0;
        memcpy(aCopy, a, sizeof(a));
        nim(n, aCopy);
        if (answerCnt < 1) {
            printf("Wrong Answer: Did not call answer()\n");
            return 0;
        }
        if (aSum == 0) {
            printf("You win the game\n");
            return 0;
        }
        computerMove();
        if (aSum == 0) {
            printf("Computer wins the game\n");
            return 0;
        }
    }
    return 0;
}
#endif
