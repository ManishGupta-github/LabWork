#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first Number:\n");
    scanf("%d", &a);
    printf("Enter Second Number:\n");
    scanf("%d", &b);
    printf("Enter third Number:\n");
    scanf("%d",&c);
    if (a > b && a > c)
        printf("%d", a);
    else if (b > c)
        printf("%d", b);
    else
        printf("%d", c);
    return 0;
}