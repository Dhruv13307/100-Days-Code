// Q17: Write a program to find the roots of a quadratic equation and categorize them.

// /*
// Sample Test Cases:
// Input 1:
// 1 -3 2
// Output 1:
// Roots are real and different: 2, 1

// Input 2:
// 1 -2 1
// Output 2:
// Roots are real and same: 1

// Input 3:
// 1 2 5
// Output 3:
// Roots are complex

// */

#include <stdio.h>
int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are Real and Distinct: %.2f, %.2f\n", root1, root2);
    } else if (d == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are Real and Equal: %.2f, %.2f\n", root1, root2);
    } else {
        float real_part = -b / (2*a);
        float imag_part = sqrt(-d) / (2*a);
        printf("Roots are Complex: %.2f+%.2fi , %.2f-%.2fi\n", real_part, imag_part, real_part, imag_part);
    }

    return 0;
}
