#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Please enter your base: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) { // half pyramid
        for (j = 0; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    // full pyramid

    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            printf(" ");
        }

        for (j = 0; j < (2 * i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}