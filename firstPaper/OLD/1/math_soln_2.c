// GCD & LCM between two numbers.
// GCD- Greatest Common Divisor / HCF- Highest Common Factor
// LCM- Least Common Multiple

#include<stdio.h>

int main()
{
    int a, b, t, x, gcd, lcm, num1, num2;

    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    /* // not efficient
        if(a < b) {
            x = a;
        }
        else {
            x = b;
        }

        for(; x >= 1; x--) {
            if(a % x == 0 && b % x == 0) {
                gcd = x;
                break;
            }
        }
    */ // efficient
    if(a == 0) gcd = a;
    else if(b == 0) gcd = b;
    else {
        while(b != 0) {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
        lcm = (num1 * num2 ) / gcd;
    }

    printf("GCD is %d\n", gcd);
    printf("LCM is %d\n", lcm);

    return 0;
}

/*
// Farenheit to Celsius
// c = (f - 32) / 1.8;

#include<stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit - 32) / 1.8;

    printf("Temperature in celsius is: %0.2lf\n", celsius);

    return 0;
}

// Celsius to farenheit
// f = (c * 1.8) + 32;

#include<stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;

    printf("Temperature in farenheit is: %0.2lf\n", farenheit);

    return 0;
}

*/
