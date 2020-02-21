#include<stdio.h>

double pi = 3.1416;

double area_circle(double r)
{
    double area = pi * r * r;
    return area;
}

int main()
{
    double area = area_circle(55);
    printf("%0.3lf\n", area);

    return 0;
}