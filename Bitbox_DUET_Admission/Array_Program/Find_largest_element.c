// Find the largest element in an array - C
#include <stdio.h>

int main()
{
    int  a[50], size, i, big;

    printf("Input array size (<50) = ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("Enter %d th element = ", i+1);
        scanf("%d", &a[i]);
    }
    big = a[0];

    for (i = 1; i < size; i++) {
        if (big < a[i]) {
            big = a[i];
        }
    }

    printf("Biggest = %d\n", big);

    return 0;
}
