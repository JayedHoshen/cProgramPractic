#include <stdio.h>
#include "header.h"

int main()
{
    int n1 = 10, n2 = 5;

    printf("%d + %d = %d\n", n1, n2, add(n1, n2));
    printf("%d - %d = %d\n", n1, n2, sub(n1, n2));

    return 0;
}
