// Find sum of odd numbers from 1 to n - C
#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i+=2) {
        sum += i;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}
