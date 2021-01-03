/*
    write a program printing this pattern number of N (n = 7)
    c                  c
    cc                cc
    ccc              ccc
    cccc            cccc
    ccccc          ccccc
    cccccc        cccccc
    ccccccc      ccccccc
    cccccccc    cccccccc
    ccccccccc  ccccccccc
    cccccccccccccccccccc
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    // first part
    for (row = 1; row <= n; row++) {
        // first part
        for (col = 1; col <= row; col++) {
            printf("C");
        }

        // space printing
        for (col = 1; col <= n - row; col++) {
            printf("  ");
        }

        // second part
        for (col = 1; col <= row; col++) {
            printf("C");
        }

        printf("\n");
    }

    return 0;
}
