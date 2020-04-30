#include <stdio.h>

int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for (i = 0, j = 9; i < 10/2; i++, j--) {
        printf("%dth: %d", i+1, ara[i]);
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
        printf(" and %4dth: %3d\t Swaping %d\n", j+1, ara[i], i+1);
    }

    printf("\n----------------- Reverse Array Output --------------------\n\n");

    for (i = 0; i < 10; i++) {
        printf("%20dth element is: %d\n", i+1, ara[i]);
    }

    return 0;
}
