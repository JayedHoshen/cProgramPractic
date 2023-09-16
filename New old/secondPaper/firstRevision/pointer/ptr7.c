#include<stdio.h>

int main()
{
    int *p = NULL;
    *p = 100;

    printf("Value of *p: %d\n", *p);

    return 0;
}

/*
#include<stdio.h> // second

int main()
{
    int x = 100;
    int *p = NULL;

    printf("Value of x: %d\n", x);
    p = &x;
    printf("Value of *p: %d\n", *p);

    return 0;
}

#include<stdio.h> // first

int main()
{
    int x = 100;
    int *p = NULL;

    printf("Value of x: %d\n", x);
    printf("Value of *p: %d\n", *p);

    return 0;
}
*/
