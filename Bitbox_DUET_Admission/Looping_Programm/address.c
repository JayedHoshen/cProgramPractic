// What will be the output of the following program? Justify your answer.
// ( Hints: incase of address write either address of x or address of y )
#include <stdio.h>

int main()
{
    int x = 3;
    int *y;

    y = &x;

    printf("%d\n", y);
    printf("%u\n", &y);
    printf("%d\n", x);
    printf("%u\n", &x);

    return 0;
}
