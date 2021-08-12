// celsius to farenheit: C = (F + 32) / 1.8;

#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit + 32) / 1.8;

    printf("Temperature in celsius is: %0.2lf\n", celsius);

    return 0;
}

