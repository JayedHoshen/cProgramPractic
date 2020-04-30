/* ============= GCD between two numbers ==========
    GCD- Greatest Common Divisor / HCF- Highest Common Factor
    LCM- Least Common Multiple
*/
// Efficient: u-clid theoram (division algorithm)
#include <stdio.h>

int main()
{
    int a, b, t, gcd;

    scanf("%d %d", &a, &b);

    if (a == 0) gcd = a;
    else if (b == 0) gcd = b;
    else {
        while (b != 0) {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    printf("GCD is %d\n", gcd);

    return 0;
}

/*
// not efficient
#include <stdio.h>

int main()
{
    int a, b, x, gcd;

    scanf("%d %d", &a, &b);

    if (a < b) {
        x = a;
    }
    else {
        x = b;
    }

    /* it's my implementation
        while (x > 0) {
            if (a % x == 0 && b % x == 0) {
                gcd = x;
                break;
            }
            x--;
        }

    // books implementation
    for (; x >= 1; x--) {
        if (a % x == 0 && b % x == 0) {
            gcd = x;
            break;
        }
    }

    printf("GCD is %d\n", gcd);

    return 0;
}
*/
