/* Type 2: pyramid printing number of N

-----------------------first-------------------------------
    Column major order.....
     12345
      123
       1

    Row major order........
     33333
      222
       1

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d", col);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d", row);
        }

        printf("\n");
    }

    return 0;
}

-----------------------second-------------------------------
    Column major order.....
     10101
      101
       1

    Row major order........
     11111
      000
       1

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d", col%2);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%d", row%2);
        }

        printf("\n");
    }

    return 0;
}

-----------------------third-------------------------------
    Column major order.....
     ABCDE
      ABC
       A

    Row major order........
     CCCCC
      BBB
       A

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major order
    printf("Column major order.................\n");
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%c", col+64);
        }

        printf("\n");
    }

    // Row major order
    printf("\nRow major order.................\n");
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("%c", row+64);
        }

        printf("\n");
    }

    return 0;
}

-----------------------forth-------------------------------
     *****
      ***
       *

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= 2*row - 1; col++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
