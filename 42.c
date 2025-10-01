// Q42: Write a program to check if a number is a perfect number.

// /*
// Sample Test Cases:
// Input 1:
// 6
// Output 1:
// Perfect number

// Input 2:
// 10
// Output 2:
// Not perfect number

// */

#include <stdio.h>

int main() 
{
    int n;
    int sum=0,product=1;
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            product*=i;
        }
    }
    printf("%d \n%d \n",sum,product);
    if(sum==product)
    {
        printf("It's a perfect number ");
    }
    else
    {
        printf("Not a perfect number ");
    }
    return 0;
}
