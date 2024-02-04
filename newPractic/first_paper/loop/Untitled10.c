#include <stdio.h>

int main()
{
    int n, m, i, j;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 1) {
        printf("\nEnter m (two digit number) = ");
        scanf("%d", &m);

        for (j = 10; j <= m; j += 1) {
            if (j%11 == 0) {
                continue;
            }
            else {
                printf("%d, ", j);
            }
        }
    }

    return 0;
}
