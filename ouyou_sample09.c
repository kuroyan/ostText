#include<stdio.h>
int main(void) {

  const double PI = 3.141592;
  int r;

  printf("半径を入力してください。 ");
  scanf("%d", &r);
  printf("半径が%d の円の面積は%.2lf\n", r, (r * r * PI));
  //PI = 10; //コメントを解除するとコンパイルエラー

  return 0;
}

