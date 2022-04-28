// How many bit have to change to convert int A to int B - C
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c = 0, p = 0;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    c = a ^ b;
    while(c) {
        p += c & 1;
        c >>= 1;
    }

    printf("Number of bit difference is %d\n", p);

    return  0;
}
