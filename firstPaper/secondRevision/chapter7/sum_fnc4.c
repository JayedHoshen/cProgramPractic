#include <stdio.h>

double add(double x, double y); // no error

int main()
{
    double a = 2.7, b = 2.8, c;

    c = add(a, b);
    printf("%lf\n", c);

    return 0;
}

double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
