#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y, z;

    printf("Enter value of a1 and a2 = ");
    scanf("%lf %lf", &a1, &a2);

    printf("Enter value of b1 and b2 = ");
    scanf("%lf %lf", &b1, &b2);

    printf("Enter value of c1 and c2 = ");
    scanf("%lf %lf", &c1, &c2);

    z = (a1*b2) - (a2*b1);

    if ((int) z == 0) {
        printf("Value of x and y can not be determined.\n");
    }
    else {
        x = ((b2*c1) - (b1*c2)) / z;
        y = ((a1*c2) - (a2*c1)) / z;

        printf("value of x is = %.2lf\n", x);
        printf("Value of y is = %.2lf\n", y);
    }

    return 0;
}
