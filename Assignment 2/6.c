#include <stdio.h>

int FUNSUM(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main () {

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[100];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = FUNSUM(arr, size);
    printf("The sum of the array elements is: %d\n", result);

    return 0;

}