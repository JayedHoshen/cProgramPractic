#include <stdio.h>
#include <stdlib.h>

int comparefunc(const void *a, const void *b)
{
    //return (*(int*)b - *(int*)a); // highest to smallest sort
    return (*(int*)a - *(int*)b); // small to highest sort
}

int main()
{
    int i, n = 6;
    int values[] = {65, 6, 100, 1, 2, 50};

    qsort(values, n, sizeof(int), comparefunc);

    for (i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }

    printf("\n");

    return 0;
}
