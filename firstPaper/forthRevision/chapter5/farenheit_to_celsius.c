#include <stdio.h>

int main()
{
    double farenheit, celsius;

    printf("Enter the temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = farenheit - 32 / 1.8;

    printf("Temperature in celsius is: %0.2lf\n", celsius);

    return 0;
}
