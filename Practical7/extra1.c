#include <stdio.h>

int fibonacci (int n) {
    if (n == 0) 
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main () {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = fibonacci(num);

    printf("Fibonacci of %d is %d\n", num, result);


    for (int i = 0; i <= num; i++) {
        printf("Fibonacci of %d is %d\n", i, fibonacci(i));
    }
    
    return 0;

}