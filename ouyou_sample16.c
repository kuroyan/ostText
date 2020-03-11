#include<stdio.h>

int main(void) {
  int num1 = 3;
  int num2 = 2;
  double ans;

  ans = num1 / num2;
  printf("%lf\n", ans);
  ans = num1 / (double)num2;

  printf("%lf\n", ans);
  printf("%d\n", num2);

  return 0;
}

