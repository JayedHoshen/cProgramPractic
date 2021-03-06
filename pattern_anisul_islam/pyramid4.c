/* Type 1: pyramid printing number of N

-----------------------first-------------------------------
    Column major order.....
       1
      1 2
     1 2 3

    Row major order........
       1
      2 2
     3 3 3

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
        for (col = 1; col <= n-row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d ", col);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n-row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d ", row);
        }

        printf("\n");
    }

    return 0;
}

-----------------------second-------------------------------
    Column major order.....
       1
      1 0
     1 0 1

    Row major order........
       1
      0 0
     1 1 1

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
        for (col = 1; col <= n-row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d ", col%2);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n-row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d ", row%2);
        }

        printf("\n");
    }

    return 0;
}

-----------------------third-------------------------------
    Column major order.....
       A
      A B
     A B C

    Row major order........
       A
      B B
     C C C

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
        for (col = 1; col <= n-row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%c ", col+64);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n-row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%c ", row+64);
        }

        printf("\n");
    }

    return 0;
}

-----------------------forth-------------------------------
       *
      * *
     * * *

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n-row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

