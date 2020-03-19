#include<stdio.h>

int main(void) {
  char word[] = "pencil";
  char* pword = &word[0]; // ch
  int box[] = { 10,  20,  30,  40 };
  int* pbox = &box[ 0 ]; // in

  printf( "%c\n", *pword );
  printf( "%d\n\n", *pbox );

  pword ++;
  pbox ++;

  printf(  "%c\n", *pword );
  printf( "%d\n\n", *pbox) ;
  printf( "%c\n", *( pword + 2 ));
  printf( "%d\n\n", *( pbox - 1 ));

  return 0;
}
