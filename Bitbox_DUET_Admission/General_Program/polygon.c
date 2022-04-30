// Polygon Degree - C
#include <stdio.h>

int main()
{
    int n, angle;

    printf("Enter the polygon side: ");
    scanf("%d", &n);

    angle = ((n - 2) * 180) / n;

    printf("The angle is: %d\n", angle);

    return 0;
}
