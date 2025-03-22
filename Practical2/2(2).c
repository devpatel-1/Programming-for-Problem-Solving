// Write a program to swap (interchange) values of two
// variables with or without using a third variable.

#include <stdio.h>
int main(){
    int a, b, c;
    a = 5, b = 10;
    c = a;
    a = b;
    b = c;

    printf("a = %d, b = %d\n",a,b);

    return 0;
}
 

// without using third variable  

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     a = 25, b = 5;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf(" a = %d , b = %d",a,b);

//     return 0;
// }