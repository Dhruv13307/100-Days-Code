//Q69 (Arrays (1D))
//Find the second largest element in an array
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i);
        scanf("%d",&a[i]);
    }
    int largest=a[0];
    int sec_largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]!=largest) &&(a[i]>sec_largest))
        {
            sec_largest=a[i];
        }
    }
    
    if(sec_largest==INT_MIN)
    {
        printf("All the elements are equal");
    }
    else
    {
          printf("%d",sec_largest);
    }
    
    
  
    
    return 0;
}
