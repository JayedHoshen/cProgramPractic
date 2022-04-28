// Sum of two numbers without + operator - C
#include <stdio.h>

int main()
{
    int a, b;
    int sum;

    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a - ~ b - 1;

    printf("Sum of two integers: %d\n", sum);

    return 0;
}
