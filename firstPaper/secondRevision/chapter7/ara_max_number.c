// find an integer arrays maximum value

#include <stdio.h>

// prototype declare
int fin_max(int ara[], int n);

// main function declare
int main()
{
    int ara[] = {
        -100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85
    };
    int n = 11;

    int max = find_max(ara, n);
    printf("Maximum value of array is %d\n", max);

    return 0;
}

// creating max function
int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;

    for (i = 1; i < n; i++) {
        if (ara[i] > max) {
            max = ara[i];
        }
    }

    return max;

}
