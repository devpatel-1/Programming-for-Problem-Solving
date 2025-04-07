#include <stdio.h>
#include <string.h>

int main () {

   char str[] = "hello";
   
   printf("Original: %s\n", str);
   printf("Reversed: %s\n", strrev(str));

   return 0;

}