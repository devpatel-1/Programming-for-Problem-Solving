#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

   char *str;

   str = (char *)malloc(20 * sizeof(char));
   if(str == NULL) {
    printf("Memory allocation failed\n");
    return 1;
   }

   strcpy(str, "Hello");
   printf("Original string: %s\n", str);
   printf("Memory allocated for %d charactewrs\n", 20);

   free (str);

   str = (char *)malloc(50 * sizeof(char));
   if (str == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
   }

   strcpy(str, "Hello, this is a larger string now!");
   printf("Modified string: %s\n", str);
   printf("Memory allocated for %d charactewrs\n", 50);

   
   free (str);

   return 0

}