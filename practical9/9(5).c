#include <stdio.h>

int main () {

   int num = 10;

   int *ptr = &num;

   printf("Variable value: %d\n", num);
   printf("Variable address: %p\n", (void*)ptr);

   *ptr = 50;

   printf("New variable value: %d\n", num);

   return 0;

}