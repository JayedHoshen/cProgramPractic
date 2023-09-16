// summation of seris: using rule

#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter N: ");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Summation is %d\n", sum);

    return 0;
}
