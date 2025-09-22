// Q33: Write a program to check if a number is an Armstrong number.

// /*
// Sample Test Cases:
// Input 1:
// 153
// Output 1:
// Armstrong

// Input 2:
// 123
// Output 2:
// Not Armstrong

// */


#include <stdio.h>

int main() {
    int n, a, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;
    while (temp > 0) {   // count digits
        digits++;
        a /= 10;
    }

    a = n;
    while (a > 0) {
        int d = a % 10;
        int power = 1;

        // compute d^digits manually
        for (int i = 0; i < digits; i++) {
            power *= d;
        }

        sum += power;
        a /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}
