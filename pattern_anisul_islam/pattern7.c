/* Type 7: pattern printing number of N

-----------------------first-------------------------------
    Column major order.....
    123
    123
    123

    Row major order........
    111
    222
    333

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            printf("%d ", col);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            printf("%d ", row);
        }

        printf("\n");
    }

    return 0;
}

-----------------------second-------------------------------
    Column major order.....
    ABC
    ABC
    ABC

    Row major order........
    AAA
    BBB
    CCC

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            printf("%c ", col+64);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            printf("%c ", row+64);
        }

        printf("\n");
    }

    return 0;
}

-----------------------third-------------------------------
    ***
    ***
    ***
#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}


