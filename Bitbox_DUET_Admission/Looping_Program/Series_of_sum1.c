// Write a program to evaluate the series: 1*3+2*5*3*7+....+n*(2n+1) = ?
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter Nth position value = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (i*(2*i+1));
    }

    printf("Summation is %d\n", sum);

    return 0;
}
