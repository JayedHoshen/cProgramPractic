#include <stdio.h>

#define PI  3.1416

double circleArea(int n);

int  main()
{
    double n;

    printf("Enter a number = ");
    scanf("%lf", &n);

    printf("Area of circle = %.2lf\n", circleArea(n));

    return 0;
}

double circleArea(int num) {
    double area;
    area = PI * num * num;
    return area;
}
