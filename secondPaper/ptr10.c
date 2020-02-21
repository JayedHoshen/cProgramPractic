#include<stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    **q = 'B';

    printf("Value of c : %c\n", c); // A
    printf("Value of c : %c\n", *p); // A
    printf("Value of c : %c\n", **q); // B


    return 0;
}
