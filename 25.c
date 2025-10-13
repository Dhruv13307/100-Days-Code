// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

// /*
// Sample Test Cases:
// Input 1:
// 4 2 +
// Output 1:
// 6

// Input 2:
// 10 3 %
// Output 2:
// 1

// Input 3:
// 15 5 /
// Output 3:
// 3

// */

#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("Result = %.2f\n", a+b); break;
        case '-': printf("Result = %.2f\n", a-b); break;
        case '*': printf("Result = %.2f\n", a*b); break;
        case '/': 
            if(b != 0) printf("Result = %.2f\n", a/b);
            else 
                printf("Division by zero not allowed!\n");
            break;
        case '%': printf("Result = %d\n", (int)a % (int)b); break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}


