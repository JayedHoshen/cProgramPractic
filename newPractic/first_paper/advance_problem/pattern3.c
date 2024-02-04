#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++) {
        for(col = 1; col <= row; col++) {
            printf("C");
        }
        for(col = 1; col <= n-row; col++) {
            printf("  ");
        }
        for(col = 1; col <= row; col++) {
            printf("C");
        }
        printf("\n");
    }

    return 0;
}
