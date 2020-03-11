#include<stdio.h>

int main(void) {
  char str1[] = "Hello";
  char* pstr1 = &str1[0];
  const char* pstr2 = "World";

  printf("%s\n", &str1[0]);
  printf("%s\n", pstr1);
  printf("%s\n", pstr2);
  printf("%c\n", str1[0]);
  printf("%c\n", *pstr1);
  printf("%c\n", *pstr2);
 
  return 0;
}

