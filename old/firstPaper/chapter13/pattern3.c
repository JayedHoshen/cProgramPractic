/*
    write a program printing this pattern number of N (n = 7)
    ccccccc
     cccccc
      ccccc
       cccc
        ccc
         cc
          c
         cc
        ccc
       cccc
      ccccc
     cccccc
    ccccccc
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Entern N = ");
    scanf("%d", &n);

    // first part
    for (row = n; row >= 1; row--) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        for (col = 1; col <= row; col++) {
            printf("C");
        }

        printf("\n");
    }

    // second part
    for (row = 2; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }

        for (col = 1; col <= row; col++) {
            printf("C");
        }

        printf("\n");
    }

    return 0;
}
