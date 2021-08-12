// x + y = 10, x - y = 5 === x , y ?

#include <stdio.h>

int main()
{
    double x_plus_y, x_minus_y, x, y;

    printf("x + y = ");
    scanf("%lf", &x_plus_y);

    printf("x - y = ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("\nX = %0.2lf\tY = %0.2lf\n", x, y);

    return 0;
}
