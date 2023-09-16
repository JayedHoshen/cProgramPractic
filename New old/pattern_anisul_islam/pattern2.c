/*
----------------first---------------------------------------
Type - 2:- (n*n lines pattern) Enter n = 3

    column major print....
    1 2 3
    1 2
    1

    row major print.....
    3 3 3
    2 2
    1

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // column major
    printf("\nColumn major print........\n");
    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    // row major
    printf("\nRow major print........\n");
    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}
------------------second-------------------------------------------
    Type - 2:- Enter n = 3

    column major print....
    1 0 1
    1 0
    1

    row major print.....
    1 1 1
    0 0
    1


#include <stdio.h>

int main()
{
    int n, row, col, r_print, c_print;

    printf("Enter N = ");
    scanf("%d", &n);

    // first answer
    printf("Column major print....\n");
    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            c_print = col % 2;
            printf("%d ", c_print);
        }
        printf("\n");
    }

    // 2nd answer
    printf("\n\nRow major print....\n");
    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            r_print = row % 2;
            printf("%d ", r_print);
        }
        printf("\n");
    }

    return 0;
}
---------------third-------------------------------
    Type - 2:- Enter n = 3

    column major print....
    a b c
    a b
    a

    row major print.....
    c c c
    b b
    a

#include <stdio.h>

int main()
{
    int n, row, col, r_print, c_print;

    printf("Enter N = ");
    scanf("%d", &n);

    // first answer
    printf("Column major print....\n");
    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            c_print = col + 96; // small letter, capital 64+...
            printf("%c ", c_print);
        }
        printf("\n");
    }

    // 2nd answer
    printf("\n\nRow major print....\n");
    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            r_print = row + 96;
            printf("%c ", r_print);
        }
        printf("\n");
    }

    return 0;
}
