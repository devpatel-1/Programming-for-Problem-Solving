#include <stdio.h>

int main () {

   int size;
   printf("Enter the size of array: ");
   scanf("%d", &size);

   int arr[100];

   int *ptr = arr;

   printf("Enter %d integers:\n", size);
   for (int i = 0; i < size; i++) {
    scanf("%d", ptr + i);
   }

   printf("Array in reverse order:\n");
   for (int i = size - 1; i >= 0; i--) {
    printf("%d ", *(ptr + i));
   }

   printf("\n");

   return 0;

}