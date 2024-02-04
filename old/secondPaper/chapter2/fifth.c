#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    printf("Value of x: %d\n", x); // x = 10

    p = &x; // addresss of x is stored p
    *p = 20; // x is 20

    printf("Value of x: %d\n", x); // x = 20

    x = 15;

    printf("Value of x: %d\n", x); // 15
    printf("Value stored at location %p is %d\n", p, *p); // location x, value x = 15 (dereferencing=*p)

    printf("Address of x: %p\n", &x); // x address
    printf("Value of p: %p\n", p);// x address that p value

    return 0;
}
