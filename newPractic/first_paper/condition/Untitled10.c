// modulus value calculate without % operator
#include <stdio.h>

int main()
{
    int number, d, div, mul, result;

    printf("Enter an integer number = ");
    scanf("%d", &number);

    printf("Divisor number = ");
    scanf("%d", &d);

    div = number / d;
    mul = div * d;
    result = number - mul;

    printf("%d %% %d = %d\n", number, d, result);

    return 0;
}
