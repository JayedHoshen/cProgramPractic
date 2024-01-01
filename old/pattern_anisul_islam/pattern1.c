/*
    Type - 1:- (n*n lines pattern) Enter n = 4

    column major print....
    1
    1 2
    1 2 3
    1 2 3 4

    row major print.....
    1
    2 2
    3 3 3
    4 4 4 4
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major
    printf("\nColumn major print........\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    // row major
    printf("\nRow major print........\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}


/*
    Type - 1:- Enter n = 4

    column major print....
    1
    1 0
    1 0 1
    1 0 1 0

    row major print.....
    1
    0 0
    1 1 1
    0 0 0 0
*/

#include <stdio.h>

int main()
{
    int n, row, col, r_print, c_print;

    printf("Enter N = ");
    scanf("%d", &n);

    // first answer
    printf("Column major print....\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            r_print = row % 2;
            c_print = col % 2;
            printf("%d ", c_print);
        }
        printf("\n");
    }

    // 2nd answer
    printf("\n\nRow major print....\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            r_print = row % 2;
            printf("%d ", r_print);
        }
        printf("\n");
    }

    return 0;
}


/*
    Type - 1:- Enter n = 4

    column major print....
    a
    a b
    a b c
    a b c d

    row major print.....
    a
    b b
    c c c
    d d d d
*/

#include <stdio.h>

int main()
{
    int n, row, col, r_print, c_print;

    printf("Enter N = ");
    scanf("%d", &n);

    // first answer
    printf("Column major print....\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            c_print = col + 96; // small letter, capital 64+...
            printf("%c ", c_print);
        }
        printf("\n");
    }

    // 2nd answer
    printf("\n\nRow major print....\n");
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            r_print = row + 96;
            printf("%c ", r_print);
        }
        printf("\n");
    }

    return 0;
}
