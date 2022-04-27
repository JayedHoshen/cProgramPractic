// Farenheit to Celcius convert- c

#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter farenheit : ");
    scanf("%f", &f);

    c = ((f - 32) * 5) / 9;

    printf("Celcius: %f\n", c);

    return 0;
}
