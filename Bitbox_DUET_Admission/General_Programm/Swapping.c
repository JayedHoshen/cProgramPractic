// Swapping with temp - C
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter value of a and b --\n");
    scanf("%d %d", &a, &b);
    printf("After Swapping: a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Before Swapping: a = %d, b = %d\n", a, b);

    return 0;
}
