// Swapping without temp variable - C
#include <stdio.h>

int main()
{
    int a = 5, b = 10;

    printf("Without swapping : a = %d, b = %d\n", a, b);

    // first method
    a = a + b;
    b = a - b;
    a = a - b;
    printf("First: a = %d, b = %d\n", a, b);

    // second method
    a = a + b - (b = a);
    printf("Second: a = %d, b = %d\n", a, b);

    // third method
    a = a ^ b;
    b = a ^ b;
    a = b ^ a;
    printf("Third: a = %d, b = %d\n", a, b);

    // Forth method
    a = b - ~ a - 1;
    b = a + ~ b + 1;
    a = a + ~ b + 1;
    printf("Forth: a = %d, b = %d\n", a, b);

    return 0;
}



