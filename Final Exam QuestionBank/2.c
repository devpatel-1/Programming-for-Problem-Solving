// Write a for loop to display even numbers from 1 to 20

#include <stdio.h>

int main () {

    int i;

    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }   
    }
  
    return 0;

}