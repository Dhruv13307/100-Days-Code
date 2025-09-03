// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

// /*
// Sample Test Cases:
// Input 1:
// -5
// Output 1:
// Negative

// Input 2:
// 0
// Output 2:
// Zero

// Input 3:
// 10
// Output 3:
// Positive

// */

#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("Number is Zero\n");
        else
            printf("Number is Positive\n");
    } else {
        printf("Number is Negative\n");
    }

    return 0;
}
