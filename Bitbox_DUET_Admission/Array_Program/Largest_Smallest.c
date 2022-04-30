// Find largest and smallest umber in an array - C
#include <stdio.h>

int main()
{
    int a[50], size, i, big, small;

    printf("Enter the size of the array = ");
    scanf("%d", &size);

    printf("Enter %d elements in to the array --\n ", size);
    for (i = 0; i < size; i++) {
        printf("Enter %d th element = ", i+1);
        scanf("%d", &a[i]);
    }

    big = a[0];
    for (i = 1; i < size; i++) {
        if (big < a[i]) big = a[i];
    }
    printf("\nLargest element = %d\n", big);

    small = a[0];
    for (i = 1; i < size; i++) {
        if (small > a[i]) small = a[i];
    }
    printf("Smallest element = %d\n", small);

    return 0;
}
