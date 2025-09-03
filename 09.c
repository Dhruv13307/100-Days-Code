// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

// /*
// Sample Test Cases:
// Input 1:
// 1000 5 2
// Output 1:
// Simple Interest=100, Compound Interest=102.5

// Input 2:
// 5000 7 3
// Output 2:
// Simple Interest=1050, Compound Interest=1125.76

// */

#include <stdio.h>

int main()
{
    float p, r, t, si, amount = 1.0, ci;
    int i;

    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    amount = p;
    for (i = 1; i <= (int)t; i++)
    {
        amount = amount * (1 + r / 100);
    }
    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

