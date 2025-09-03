// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

// /*
// Sample Test Cases:
// Input 1:
// 0
// Output 1:
// Fahrenheit=32

// Input 2:
// 100
// Output 2:
// Fahrenheit=212

// */

#include <stdio.h>
int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (9.0/5)*c + 32;
    printf("Temperature in Fahrenheit = %.2f\n", f);
    return 0;
}
