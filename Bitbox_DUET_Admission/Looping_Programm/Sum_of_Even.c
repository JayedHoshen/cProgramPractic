// find sum of even numbers 2 between 1 to n - C
#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter upper limit = ");
    scanf("%d", &n);

    for (i = 2; i <= n; i+=2) {
        sum += i;
    }

    printf("Sum of add even number between 1 to %d = %d\n", n, sum);

    return 0;
}
