#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in farenheit = ");
    scanf("%lf", &farenheit);

    celsius = ((farenheit - 32) * 5) / 9;

    printf("Temperature in celsius is = %lf\n", celsius);

    return 0;
}


/*#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius = ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;

    printf("Temperature in farenheit is = %lf\n", farenheit);

    return 0;
}*/
