#include<stdio.h>

int main(void) {
  int i, j;
  int score[3][5] = {
    {53, 39, 77, 95, 23},
    {90, 65, 32, 86, 54},
    {72, 48, 50, 90, 15}
  };
  int row = sizeof(score) / sizeof(score[0]);
  int col = sizeof(score[0]) / sizeof(int);

  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("生徒番号%d : ", i+1);
      printf("科目番号%d : ", j+1);
      printf("点数%3d\n", score[i][j]);
    }
    printf("\n");
  }

  return 0;
}
