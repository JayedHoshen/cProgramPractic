// Find max price from 20 items - C
#include <stdio.h>

int main()
{
    int arr[20], i, max = 0;

    printf("Enter 20 items price: ");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];

    for (i = 1; i < 20; i++) {
        if (arr[i] > max) max = arr[i];
    }

    printf("Maximum price is: %d\n", max);

    return 0;
}
