// Program to print pattern - C
/*
    54321
    5432
    543
    54
    5
*/
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = n; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
