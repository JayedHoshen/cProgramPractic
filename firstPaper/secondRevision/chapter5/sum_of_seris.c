// 1 + 3 + 5 + ........... + n = ?
#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i+=2) {
        sum += i;
    }

    printf("Odd of Summition is %d\n", sum);

    return 0;
}
/*
// 1 + 2 + 3 + .... + 998 + 999 + 1000 = ?
// using loop

int main()
{
    int i, n, sum;

    scanf("%d", &n);

    for (i = 1, sum = 0; i <= n; i++) {
        sum = sum + i;
    }

    printf("Summition is %d\n", sum);

    return 0;
}

// using: (n * (n+1)) / 2 (efficient);

#include <stdio.h>

int main()
{
    int n, sum;

    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;

    printf("Summition is %d\n", sum);

    return 0;
}
*/
