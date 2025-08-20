//Product of N natural numbers using loop
//Sum of N natural numbers using loop
#include<stdio.h>
int main()
{
    int n,mult;
    printf("Enter the Number\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        mult*=i;
    }
    printf("%d",mult);
    return 0;
}