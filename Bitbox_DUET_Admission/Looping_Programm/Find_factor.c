// Find the factor of n value. Where, Input: 10, Output: 7 (5,2) factor - C
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer for find factor summation: ");
    scanf("%d", &n);

    printf("Factors are : ");
    for (i = 2; i < n; i++) {
        if (n % 2 == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nFactor summation is: %d\n", sum);

    return 0;
}
