#include <stdio.h>

int main()
{
    int fact = 1, i, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial is: %d\n", fact);

    return 0;
}
