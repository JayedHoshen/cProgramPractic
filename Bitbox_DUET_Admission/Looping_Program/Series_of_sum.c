// [1+(1+2)+(1+2+3)+.....+(1+2+...n)] = ?
// Calculate the sum of the series - C
#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter the value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            sum += j;
        }
    }

    printf("Sum of %d\n", sum);

    return 0;
}
