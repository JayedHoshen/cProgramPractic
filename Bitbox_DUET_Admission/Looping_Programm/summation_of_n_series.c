// Summation of this series 1 + 2 + 3 + 4 + ...... + n
#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Summation is: %d\n", sum);

    return 0;
}
