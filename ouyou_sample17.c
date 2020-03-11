#include<stdio.h>

int main(void) {
  char buf[2] = { 0x02, 0x01 };

  short* p = (short*)&buf[0];

  printf( "%d\n", *p );

  return 0;
}
