#include <stdio.h>

int main()
{
    int num1, num2, n1, n2, temp, gcd, lcm;

    printf("Enter n1 and n2 value: ");
    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;

    if (n1 == 0) gcd = n1;
    else if (n2 == 0) gcd = n2;
    else {
        while (n2 != 0) {
            temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }
        gcd = n1;
    }

    lcm = (num1 * num2) / gcd;

    printf("GCD is %d\nLCM is %d\n", gcd, lcm);

    return 0;
}
