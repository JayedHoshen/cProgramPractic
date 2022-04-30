// Area of somokony Triangle- C

#include <stdio.h>

int main()
{
    float h, w, area;

    printf("Enter height and width: ");
    scanf("%f%f", &h, &w);

    area = 0.5 * h * w;

    printf("Area of triangle: %f\n", area);

    return 0;
}
