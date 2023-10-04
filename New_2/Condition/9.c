#include <stdio.h>

int main()
{
    int div, mul, result, number;

    printf("Please enter a number = ");
    scanf("%d", &number);

    div = number / 2;
    mul = div * 2;
    result = number - mul;

    printf("Modulus value is = %d\n", result);

    return 0;
}
