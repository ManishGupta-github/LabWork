#include<stdio.h>
int main()
{
    //largest of three number
    int a,b,c;
    printf("Enter the 1st Number:\n");
    scanf("%d",&a);
    printf("Enter the 2nd Number:\n");
    scanf("%d",&b);
    // printf("Enter the Third Number:\n");
    // scanf("%d",&c);
    if(a>b)
        printf("The largest Number is %d",a);
    else
        printf("The largest Number is %d",b);
    // if(b>a)
    // {
    //     if(b>c)
    //         printf("The largest Number is %d",b);
        
    // }
    return 0;
}