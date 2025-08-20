#include <stdio.h>
int main()
{
    // Leap Year
    int a;
    printf("Enter Year\n");
    scanf("%d", &a);
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}