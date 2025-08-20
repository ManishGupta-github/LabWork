//Sum of N natural numbers using loop
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the Number\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}