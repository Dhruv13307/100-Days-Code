// Q34: Write a program to check if a number is prime.

// /*
// Sample Test Cases:
// Input 1:
// 7
// Output 1:
// Prime

// Input 2:
// 10
// Output 2:
// Not prime

// */

#include <stdio.h>

int main() {
    int n, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) prime = 0;
    if (n==2) prime=1;
else{
    for (int i = 2; i< n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }}

    if (prime)
        printf("%d is Prime\n", n);
    else
        printf("%d is not Prime\n", n);

    return 0;
}
