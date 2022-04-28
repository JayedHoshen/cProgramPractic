// Print numbers from 1 to N - C
#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
