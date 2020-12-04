// convert celsius to fahrenheit using function
#include <stdio.h>

float celsius_to_fahrenheit(float celsius);

int main()
{
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = celsius_to_fahrenheit(celsius);

    printf("Fahrenheit = %f\n", fahrenheit);

    return 0;
}

float celsius_to_fahrenheit(float celsius)
{
    return ((celsius * 9 / 5) + 32);
}
