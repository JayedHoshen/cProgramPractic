/* Type 8: pattern printing number of N

    1
    2 4
    3 6 9

*/
#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) {
            printf("%d ", row*col);
        }

        printf("\n");
    }

    return 0;
}


