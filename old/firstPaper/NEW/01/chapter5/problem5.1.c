// summation of seris: using loop

#include <stdio.h>

int main()
{
    int n, i, sum;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1, sum = 0; i <= n; i++) {
        sum = sum + i;
    }

    printf("Summation is %d\n", sum);

    return 0;
}
