// celsius to farenheit: F = (C * 1.8) + 32

#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = (celsius * 1.8) + 32;

    printf("Temperature in farenheit is: %0.2lf\n", farenheit);

    return 0;
}
