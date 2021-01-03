// Triangle star pattern
#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            if (col == 1 || row == n || row == col) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

