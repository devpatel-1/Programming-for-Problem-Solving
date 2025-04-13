#include <stdio.h>

int main () {

   int num = 10;

   int *ptr = &num;

   printf("Variable value: %d\n", num);
   printf("Pointer value: %d\n", *ptr);
   printf("Address of variable: %p\n", (void*)ptr);

   return 0;

}