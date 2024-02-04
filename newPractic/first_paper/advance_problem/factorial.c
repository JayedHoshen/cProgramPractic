#include <stdio.h>

int main()
{
    int i, n, fact = 1;

    printf("Please enter an integer value = ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial is %d\n", fact);

    return 0;
}
