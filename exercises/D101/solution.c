#include <stdio.h>
int main() {
  int a;
  scanf("%d", &a);
  int b = a / 10000000;
  if (b == 2) {
    printf("fixed");
  } else if (b == 3) {
    printf("fixed");
  } else {
    printf("mobile");
  }
  return 0;
}
