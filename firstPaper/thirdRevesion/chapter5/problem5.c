// 1 + 2 + 3 + .... + 998 + 999 + 1000 = ? sum of seres = ((n*n+1) / 2 )

#include <stdio.h>

int main()
{
    //using loop
    int i, n, sum;

    scanf("%d", &n);

    for (i = 1, sum = 0; i <= n; i++) {
        sum = sum + i;
    }

    printf("Summation is %d\n", sum);

    //or summation rules = (n* (n + 1) / 2);

    return 0;
}
