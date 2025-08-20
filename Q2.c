#include<stdio.h>
int main()
{
    //Check for Even or Odd
    int a;
    printf("Enter the Number:\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("The Number is Even");
    else
        printf("The Number is Odd");  
    return 0;
}