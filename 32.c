// Q32: Write a program to check if a number is a palindrome.

// /*
// Sample Test Cases:
// Input 1:
// 121
// Output 1:
// Palindrome

// Input 2:
// 123
// Output 2:
// Not palindrome

// */

#include <stdio.h>

int main() {
    int n, rev = 0, a;
    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;
    while (a > 0) {
        rev = rev * 10 + a % 10;
        a /= 10;
    }

    if (n == rev)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is not a Palindrome\n", n);

    return 0;
}
