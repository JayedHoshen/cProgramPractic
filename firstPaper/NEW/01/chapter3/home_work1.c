// modulus operator value creating
/* condition: first: div = number / 2
                than: mul = div * 2
                than: mod = number - mul
*/

#include <stdio.h>

int main()
{
    int num = 5, div, mul, mod;

    div = num / 2;
    mul = div * 2;
    mod = num - mul;

    printf("%d modulus is %d\n", num, mod);

    return 0;
}
