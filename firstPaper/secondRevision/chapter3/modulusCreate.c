#include <stdio.h>

int main()
{
    int n, m, cal, mod;

    printf("n modulus m = ");
    scanf("%d %d", &n, &m);

    cal = n / m * m;
   // mul = div * m;
    mod = n - cal;

    printf("%d modulus %d = %d\n", n, m, mod);

    return 0;
}
