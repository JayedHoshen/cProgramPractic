// Find GCD/HCF and LCM of two numbers - C
#include <stdio.h>

int main()
{
    int i, a, b, gcd, lcm;

    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);

    for (i = 1; i<=a && i<=b; i++) {
        if (a%i == 0 && b%i == 0) gcd = i;
    }
    lcm = (a*b) / gcd;

    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
