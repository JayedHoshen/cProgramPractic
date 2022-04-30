// write a program for 1 + 2 + 3 + ..... + n
// with O(1) complexity and it will take n as input - C
#include <stdio.h>

int main()
{
    int n;

    printf("Enter Nth positive value: ");
    scanf("%d", &n);

    n = (n * (n + 1)) / 2;

    printf("Summation is : %d\n", n);

    return 0;
}
