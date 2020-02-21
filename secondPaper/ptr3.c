#include<stdio.h>

int main()
{
    int x = 10;
    int *p;

    printf("Value of x: %d\n", x); // print 10

    p = &x;
    *p = 20;

    printf("Value of x: %d\n", x); // print 20

    x = 15;

    printf("Value of x:%d\n", x); // print 15;
    printf("Value stored at location %p is %d\n", p, *p); // first location of x, second print 15

    printf("Address of x: %p\n", &x); // print address of x
    printf("Value of P: %p\n", p); // print p address of x

    return 0;
}


/*
// First
#include<stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("Value of x: %d\n", x);

    *p = 20;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of p: %p\n", p);

    return 0;
}

// First
#include<stdio.h>

int main()
{
    double pi = 3.14159265358;

    int *ptr;

    ptr = &pi;

    printf("Value of pi : %lf\n", pi);
    printf("Value of pi : %lf\n", *ptr);

    return 0;
}

*/
