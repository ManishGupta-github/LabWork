#include<stdio.h>
int main()
{
    //Largest Of 2 Number
    int a;
    int b;
    printf("Enter the First Number:\n");
    scanf("%d",&a);
    printf("Enter the Second Number:\n");
    scanf("%d",&b);
    if(a>b)
        printf("The largest Number is %d",a);
    else
        printf("The largest Number is %d",b);  
    return 0;
}