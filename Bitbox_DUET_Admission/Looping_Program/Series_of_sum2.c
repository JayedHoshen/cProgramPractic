// 1 + 1/2*2 + 1/3*3 + 1/4*4 + .... + 1/n*n = ?
// Write a program to calculate the following series - C
#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0.0;

    printf("Enter the Limit (n value) = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (1.0/(i*i));
    }

    printf("The Summation value is = %.3f\n", sum);

    return 0;
}
