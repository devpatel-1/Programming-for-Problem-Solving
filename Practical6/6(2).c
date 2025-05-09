#include <stdio.h>

int main () {

    int arr[10];
    int sum = 0;
    int product = 1;

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (i % 2 == 0) {
            product *= arr[i];
        } else {
            sum += arr[i];
        }
    }

    printf("Sum of odd index elements: %d\n", sum);
    printf("Product of even index elements: %d\n", product);

    return 0;

}