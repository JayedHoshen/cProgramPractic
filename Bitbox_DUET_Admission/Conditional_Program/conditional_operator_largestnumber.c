// Largest number three numbers using conditional operator - C
#include <stdio.h>

int main()
{
    int a, b, c, big;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    big = (a > b && a > c ? a : b > c ? b : c);

    printf("The biggest number is: %d\n", big);

    return 0;
}
