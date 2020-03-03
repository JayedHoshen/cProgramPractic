#include<stdio.h>

int main()
{
    int n1 = 97, n2 = 32, n3;

    n3 = n1 | n2;

    printf("%d | %d = %d ASCII: %c\n", n1, n2, n3, n3);

    return 0;
}
