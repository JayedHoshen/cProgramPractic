#include <stdio.h>

int main()
{
    int number, remainder, div, mul;

    number = 11;

    div = number / 2;
    mul = div * 2;
    remainder = number - mul;

    if (remainder == 0) {
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}
