#include <stdio.h>

int main()
{
    int a, b, x, gcd;

    printf("Enter two number's: ");
    scanf("%d %d", &a, &b);

    if (a < b) x = a;
    else x = b;

    while (x >= 1) {
        if (a % x == 0 && b % x == 0) {
            gcd = x;
            break;
        }
        x --;
    }

    printf("GCD is %d\n", gcd);

    return 0;
}
