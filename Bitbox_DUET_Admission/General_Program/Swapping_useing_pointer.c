// Swapping with pointer - C
#include <stdio.h>

int main()
{
    int x, y, *a, *b, temp;

    printf("Enter the value of x and y --\n");
    scanf("%d %d", &x, &y);

    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    printf("After Swapping: x = %d, y = %d\n", x, y);

    return 0;
}
