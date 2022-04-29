// Write a program to print a diamond in the following pattern - C
/*
      *
     ***
    *****
     ***
      *
*/
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of row = ");
    scanf("%d", &n);


    // ------------------- first part -------------------
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = i-1; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }

    // ------------------- second part -------------------
    for (j = n-1; j >= 1; j--) {
        for (i = 1; i <= n-j; i++) {
            printf(" ");
        }

        for (i = 1; i <= j; i++) {
            printf("*", i);
        }

        // second part
        for (i = j - 1; i >= 1; i--) {
            printf("*", i);
        }

        printf("\n");
    }

    return 0;
}
