// find maximum number in two numbers - C
#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    if (a > b) max = a;
    else max = b;

    printf("Maximum number is : %d\n", max);

    return 0;
}
