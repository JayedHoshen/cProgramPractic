#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("*p = %d\n", *p);
    printf("Value of p is %p\n", p);
    printf("Value of x is %d\n", x);
    printf("Address of x is %p\n", &x);
    printf("Address of p is %p\n", &p);


    return 0;
}
