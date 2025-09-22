// Q39: Write a program to find the product of odd digits of a number.

// /*
// Sample Test Cases:
// Input 1:
// 12345
// Output 1:
// 15 (1*3*5)

// Input 2:
// 2468
// Output 2:
// 1 (no odd digits, assume 1)

// */


#include <stdio.h>

int main() {
    int n, prod = 1, odd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 1) {
            prod *= d;
            odd = 1;
        }
        n /= 10;
    }

    if (odd)
        printf("Product of odd digits = %d\n", prod);
    else
        printf("No odd digits found\n");

    return 0;
}
