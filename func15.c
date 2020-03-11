#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void);

int main(void)
{
  char* str;

  str = (char*)malloc(sizeof(char)*64 );
  if ( str == NULL ){
    puts("fails in securing\n");
  }

  strcpy( str, "Hello C world!!");
  printf( "%s\n", str );

  free(str);

  return 0;
}
