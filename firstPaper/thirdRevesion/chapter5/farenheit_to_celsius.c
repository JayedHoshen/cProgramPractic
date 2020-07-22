#include <stdio.h>

int main()
{
    double fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = fahrenheit - 32 / 1.8;

    printf("Temperature in Celsius is: %0.2lf\n", celsius);

    return 0;
}
