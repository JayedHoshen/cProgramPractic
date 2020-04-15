#include <stdio.h>

int main()
{
    int ara[] = {100, 300, 500, 700, 900};
    int *p;
    p = ara;

    printf("*p = %d\n", *p); // 100
    printf("*p + 1 = %d\n", *p+1); // 101
    printf("*(p+1) = %d\n", *(p+1)); // 300
    printf("*p+2 = %d\n", *p+2); // 102
    printf("*(p+2) = %d\n", *(p+2)); // 500

    return 0;
}
