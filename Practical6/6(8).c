#include <stdio.h>

int main () {

   int a[3][2][2];
   int i, j, k;

   printf("Enter elements of 3x2x2 matrix:\n");
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("Enter element a[%d][%d][%d]: ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
   }
   printf("Elements of the 3x2x2 matrix:\n");
   for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
   }
   return 0;
}