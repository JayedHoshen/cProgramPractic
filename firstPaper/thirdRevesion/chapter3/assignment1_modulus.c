#include <stdio.h>

int main()
{
    int number, div, mul, result;

    div = number / 2;
    mul = div * 2;
    result = number - mul;

    if (result == 0) {
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}
