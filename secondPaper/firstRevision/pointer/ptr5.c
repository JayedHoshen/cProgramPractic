#include<stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    y = *p; // 10
    *p = 15; // x = 15
    *q = 20;

    printf("Value of x: %d\n", x); //15
    printf("Value of y: %d\n", y); // 10
    printf("Value of *p: %d\n", *p); // 15
    printf("Value of *q: %d\n", *q); // 20

    return 0;
}

