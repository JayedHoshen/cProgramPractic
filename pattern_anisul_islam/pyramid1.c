/* Type 1: pyramid printing number of N

-----------------------first-------------------------------
    Column major order.....
       1
      123
     12345

    Row major order........
       1
      222
     33333

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d ", col);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d ", row);
        }

        printf("\n");
    }

    return 0;
}

-----------------------second-------------------------------
    Column major order.....
       1
      101
     10101

    Row major order........
       1
      000
     11111

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d ", col%2);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d ", row%2);
        }

        printf("\n");
    }

    return 0;
}

-----------------------third-------------------------------
    Column major order.....
       A
      ABC
     ABCDE

    Row major order........
       A
      BBB
     CCCCC

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%c ", col+64);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%c ", row+64);
        }

        printf("\n");
    }

    return 0;
}

-----------------------forth-------------------------------
       *
      ***
     *****

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
