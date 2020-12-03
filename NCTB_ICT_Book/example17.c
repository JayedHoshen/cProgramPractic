#include <stdio.h>

int main()
{
    int a = 15, b = 9;
    int c;

    c = a;
    a = b;
    b = c;

    printf("Value of a is %d, value of b is %d\n", a, b);

    return 0;
}
