// Feet to Meter convert- C (HW: Hints 1 ft = 3.28m)
#include <stdio.h>

int main()
{
    float ft, m;

    printf("Enter Feet : ");
    scanf("%f", &ft);

    m = ft * 3.28;

    printf("Meter: %f\n", m);

    return 0;
}
