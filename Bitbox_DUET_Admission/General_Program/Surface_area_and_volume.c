// Surface area and volume- C
#include <stdio.h>
#include <math.h>

#define PI 3.141

int main()
{
    double r, h, Surface_area, volume;

    printf("Enter r and h : ");
    scanf("%lf %lf", &r, &h);

    Surface_area = PI * r * (r + sqrt(r * r + h * h));
    volume = 0.33 * PI * r * r * h;

    printf("Surface Area: %lf\tVolume: %lf\n", Surface_area, volume);

    return 0;
}
