#include <stdio.h>

int main()
{
    int ara1[] = {3, 1, 5, 2, 4, 6, 8, 7};
    int ara2[10];

    int i, n = 8, minimum, index_2, minimum_index;

    printf("Original value: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ara1[i]);
    }

    for (index_2 = 0; index_2 < n; index_2++) {
        minimum = 10000;

        for (i = 0; i < n; i++) {
            if (ara1[i] < minimum) {
                minimum = ara1[i];
                minimum_index = i;
            }
        }

        ara1[minimum_index] = 10000;
        ara2[index_2] = minimum;
    }

    printf("\nSorted value: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ara2[i]);
    }

    return 0;
}

