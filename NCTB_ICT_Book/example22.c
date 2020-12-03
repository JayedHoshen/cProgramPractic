// power calculate
#include <stdio.h>
#include <math.h>

int main()
{
    double p, x, y;

    scanf("%lf %lf", &x, &y);

    p = pow(x, y);

    printf("%0.2lf to the power %0.2lf is: %0.2lf\n", x, y, p);

    return 0;
}
