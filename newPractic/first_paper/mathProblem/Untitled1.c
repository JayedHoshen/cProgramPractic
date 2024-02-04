#include <stdio.h>

int main()
{
    double x_plus_y, x_minus_y, x, y;

    printf("Enter (x+y) = ");
    scanf("%lf", &x_plus_y);

    printf("Enter (x-y) = ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("Value of x is = %.2lf\n", x);
    printf("Value of y is = %.2lf\n", y);

    return 0;
}
