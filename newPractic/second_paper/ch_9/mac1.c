#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

int main()
{
    int a = 83, b = 323;
    double d1 = 8.32323, d2 = 3.3332323;

    printf("maximum of %d and %d is %d\n", a, b, MAX(a, b));
    printf("maximum of %lf and %lf is %lf\n", d1, d2, MAX(d1, d2));

    return 0;
}
