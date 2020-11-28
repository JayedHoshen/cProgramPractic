#include <stdio.h>

int main()
{
    int n, m, i, k;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nNow start your game...........\n");

    for (i = 0; i < n; i++) {
        printf("\nEnter m: ");
        scanf("%d", &m);

        for (k = 10; k <= m; k++) {
            if (k % 11 != 0) {
                printf("%d ", k);
            }
        }

        printf("\n");
    }

    return 0;
}
