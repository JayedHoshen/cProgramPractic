#include <stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x; // address of x
    q = &y; // addresss of y
    y = *p; // y = 10
    *p = 15; // x = 15
    *q = 20; // y = 20

    printf("Value of x: %d\n", x); // x = 15
    printf("Value of y: %d\n", y); // y = 20
    printf("Value of *p: %d\n", *p); // *p = 15
    printf("Value of *q: %d\n", *q); // *q = 20

    return 0;
}
