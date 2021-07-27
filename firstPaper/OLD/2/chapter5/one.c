// x+y = 15, x-y = 5, write a program that print x & y value

#include <stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Enter the value of x + y: ");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x - y: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("x = %0.2lf, y = %0.2lf\n", x, y);

    return 0;
}


/* // my solution
#include <stdio.h>

int main()
{
    int x_plus_y, x_minus_y, x, y;

    printf("x + y = ");
    scanf("%d", &x_plus_y);

    printf("x - y = ");
    scanf("%d", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    x = (x_plus_y + x_minus_y) / 2;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
*/
