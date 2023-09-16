/* Type 4: pattern printing number of N

-----------------------first-------------------------------
    Column major order.....
       1
      12
     123

    Row major order........
       1
      22
     333

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // -------------- Column major order -----------
    printf("\n----------Column major order ---------\n");

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d", col);
        }

        printf("\n");
    }

    // -------------- Row major order -----------
    printf("\n----------Row major order ---------\n");

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // number printing
        for (col = 1; col <= row; col++) {
            printf("%d", row);
        }

        printf("\n");
    }

    return 0;
}

-----------------------second-------------------------------
    Column major order.....
       1
      10
     101

    Row major order........
       1
      00
     111

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // -------------- Column major order -----------
    printf("\n----------Column major order ---------\n");

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // binary number printing
        for (col = 1; col <= row; col++) {
            printf("%d", col%2);
        }

        printf("\n");
    }

    // -------------- Row major order -----------
    printf("\n----------Row major order ---------\n");

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // binary number printing
        for (col = 1; col <= row; col++) {
            printf("%d", row%2);
        }

        printf("\n");
    }

    return 0;
}


-----------------------third-------------------------------
    Column major order.....
       A
      AB
     ABC

    Row major order........
       A
      BB
     CCC

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // -------------- Column major order -----------
    printf("\n----------Column major order ---------\n");

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // character printing
        for (col = 1; col <= row; col++) {
            printf("%C", col+64);
        }

        printf("\n");
    }

    // -------------- Row major order -----------
    printf("\n----------Row major order ---------\n");

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // character printing
        for (col = 1; col <= row; col++) {
            printf("%C", row+64);
        }

        printf("\n");
    }

    return 0;
}


-----------------------forth-------------------------------
       *
      **
     ***

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        // star printing
        for (col = 1; col <= row; col++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

