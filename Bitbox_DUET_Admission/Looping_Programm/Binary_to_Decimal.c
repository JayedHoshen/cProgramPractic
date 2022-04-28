// Convert Binary to Decimal - C
#include <stdio.h>

int main()
{
    int bn, bn1, rem, n = 0, j = 1;

    printf("Enter any binary number = ");
    scanf("%d", &bn);

    bn1 = bn;

    while (bn != 0) {
        rem = bn % 10;
        n = n + rem * j;
        j *= 2;
        bn /= 10;
    }

    printf("The decimal eqivalent value of binary %d is = %d\n", bn1, n);

    return 0;
}
