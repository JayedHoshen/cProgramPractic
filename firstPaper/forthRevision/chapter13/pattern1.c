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
    int i, j, n;

    printf("N = ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }

    for (i = 2; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }

    return 0;
}
