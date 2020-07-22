#include <stdio.h>

int main()
{
    int i, n, sum;

    scanf("%d", &n);

    for (i = 1, sum = 0; i <= n; i+=2) {
        sum += i;
    }

    printf("Sum of odd numbers is %d\n", sum);

    return 0;
}
