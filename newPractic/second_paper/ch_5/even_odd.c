#include <stdio.h>

int main()
{
    int n;

    printf("Please enter an integer number = ");
    scanf("%d", &n);

    if(n & 1) printf("%d is Odd number\n", n);
    else printf("%d is Even number\n", n);

    return 0;
}
