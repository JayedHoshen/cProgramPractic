// How to calculate power(x,y) of a number - C
#include <stdio.h>

int main()
{
    int base, exponent, i, result = 1;

    printf("Enter base and exponent = ");
    scanf("%d %d", &base, &exponent);

    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    printf("%d ^ %d = %d\n", base, exponent, result);

    return 0;
}
