// Find the sum of the following series 1 + 1/2 + 1/3 + 1/4 + ..... + 1/n
#include <stdio.h>

int main()
{
    int n;
    double i, sum = 0.0;

    printf("Enter Nth position value of the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (1/i);
    }
    printf("Summation is: %lf\n", sum);

    return 0;
}
