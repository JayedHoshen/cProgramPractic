#include <stdio.h>

const double PI = 3.1416;

double area_circle(int r);

int main()
{
    int r, radius;

    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Area of Circle: %0.2lf\n", area_circle(r));

    printf("\nEnter another radius: ");
    scanf("%d", &radius);
    printf("Area of Circle: %0.2lf\n", area_circle(radius));

    return 0;
}

double area_circle(int radius)
{
    double area = PI * radius * radius;
    return area;
}
