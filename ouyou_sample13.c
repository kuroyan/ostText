#include<stdio.h>

int main(void) {
  int i;

  char message[][16] = { "Good Morning",
                         "Hello",
                          "Good Evening"  };

  for (i = 0; i < 3; i++) {
    printf("%s\n", message[i]);
    //printf("%s\n", &message[i][0]);
   }

   return 0;
}

