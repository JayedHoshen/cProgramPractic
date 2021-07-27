#include <stdio.h>

int main()
{
    double v, t, result;

    printf("Enter value of t: ");
    scanf("%lf", &t);

    printf("Enter value of v: ");
    scanf("%lf", &v);

    result = 2 * t * v;

    printf("Result is %0.2lf\n", result);


    return 0;
}
