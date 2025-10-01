// Q41: Write a program to swap the first and last digit of a number.

// /*
// Sample Test Cases:
// Input 1:
// 1234
// Output 1:
// 4231

// Input 2:
// 1001
// Output 2:
// 1001

// */

#include <stdio.h>

int main() {
    int num, first, last, digits = 0, temp, pow10 = 1, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    a = num;
    while (a > 0) {
        digits++;
        a /= 10;
    }

    last = num % 10;
    first = num;
    for (int i = 1; i < digits; i++) {
        first /= 10;
        pow10 *= 10;
    }

    middle = (num % pow10) / 10;
    swapped = last * pow10 + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
