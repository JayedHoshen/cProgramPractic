// (1*1) + (2*2) + (3*3) + ..... (n*n) = ? - C
#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter upper limit = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i*i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
