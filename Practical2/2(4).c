// Write a Program to convert the Celsius to Fahrenheit. F=(C*t) +T (declare
//     and use t=1.8 as const variable and T=32 as #define directive)


#include <stdio.h>

int main () {
 
   int T = 32;
   const float t = 1.8;

   float celsius and fahrenheit;

   printf("Enter temperature in Celsius: ");
   scanf("%f", &celsius);

   fahrenheit = (celsius * t) + T;

   printf("\nCelsius: %.2f\n", celsius);
   printf("\nFahrenheit: %.2f\n", fahrenheit);

   return 0;
}