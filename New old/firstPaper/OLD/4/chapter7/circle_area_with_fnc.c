#include <stdio.h>

double pi = 3.1416;

double circle_area(int r);

int main()
{
    int radius = 5;
    double area = circle_area(radius);
    printf("%0.2lf\n", area);

    return 0;
}

double circle_area(int r)
{
    double area = pi * r * r;

    return area;
}
