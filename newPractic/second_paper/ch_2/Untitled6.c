#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    int *p;

    printf("Value of x: %d\n", x); // x = 10

    p = &x; // p = address of x
    y = *p; // y = 10
    *p = 15; // x = 15

    printf("Value of x: %d\n", x); // 15
    printf("Value of y: %d\n", y); // 10
    printf("Value of *p: %d\n", *p); // 15
    printf("Address of x: %p\n", &x); // address of x
    printf("Address of y: %p\n", &y);
    printf("Value of p: %p\n", p); // address of x


    return 0;
}
