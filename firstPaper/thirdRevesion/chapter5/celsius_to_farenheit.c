#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;

    printf("Temperature in Fahrenheit is: %0.2lf\n", farenheit);

    return 0;
}
