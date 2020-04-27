// int datatype range: 32 bit that means 4294967296 numbers

#include <stdio.h>

int main()
{
    int a;

    a = 1000;
    printf("Value of a is %d\n", a); // 4 digit

    a = -21000;
    printf("Value of a is %d\n", a); // 5 digit (negative)

    a = 10000000;
    printf("Value of a is %d\n", a); // 8 digit

    a = -10000000;
    printf("Value of a is %d\n", a); // 8 digit (negative)

    a = 100020004000503;
    printf("Value of a is %d\n", a); // 15 digit

    a = -4325987632;
    printf("Value of a is %d\n", a); // 10 digit (negative)

    return 0;
}
