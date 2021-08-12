// nested loop

#include <stdio.h>

int main()
{
    int i, j, n, m;

    printf("Enter value of N = ");
    scanf("%d", &n);

    for (i = 0; i < n; i = i + 1) {
        printf("Enter m = ");
        scanf("%d", &m);

        for (j = 10; j <= m; j++) {
            if (j % 11 == 0) {
                continue;
            }

            printf("%d\n", j);
        }

        printf("\n");
    }

    return 0;
}
