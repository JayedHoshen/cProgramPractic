// Area of bisombahu Triangle- C
#include <stdio.h>
#include <math.h>

int main()
{
    double s, a, b, c, area;

    printf("Enter the values of a, b and c -- \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of a triangle = %lf\n", area);

    return 0;
}
